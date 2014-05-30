#include "tree_sitter/compiler.h"
#include "compiler/rules/rule.h"

namespace tree_sitter {
    using std::string;
    using std::ostream;
    using rules::rule_ptr;

    Grammar::Grammar(const std::vector<std::pair<std::string, rules::rule_ptr>> &rules) :
        rules(rules),
        options({}) {}

    Grammar::Grammar(const std::vector<std::pair<std::string, rules::rule_ptr>> &rules, GrammarOptions options) :
        rules(rules),
        options(options) {}

    bool Grammar::operator==(const Grammar &other) const {
        if (other.rules.size() != rules.size()) return false;

        for (size_t i = 0; i < rules.size(); i++) {
            auto &pair = rules[i];
            auto &other_pair = other.rules[i];
            if (other_pair.first != pair.first) return false;
            if (!other_pair.second->operator==(*pair.second)) return false;
        }

        return true;
    }

    string Grammar::start_rule_name() const {
        return rules.front().first;
    }

    ostream& operator<<(ostream &stream, const Grammar &grammar) {
        stream << string("#<grammar");
        stream << string(" rules: {");
        bool started = false;
        for (auto pair : grammar.rules) {
            if (started) stream << string(", ");
            stream << pair.first;
            stream << string(" => ");
            stream << pair.second;
            started = true;
        }
        return stream << string("}>");
    }

    GrammarError::GrammarError(GrammarErrorType type, std::string message) :
        type(type),
        message(message) {}

    bool GrammarError::operator==(const GrammarError &other) const {
        return type == other.type && message == other.message;
    }

    ostream& operator<<(ostream &stream, const GrammarError *error) {
        if (error)
            return stream << (string("#<grammar-error '") + error->message + "'>");
        else
            return stream << string("#<null>");
    }
}
