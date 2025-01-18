﻿#include "header.hpp"

const char* lexemeTypeName(enum TypeOfToken type) {
    switch (type) {
    case MaimProgram:   return "MaimProgram";
    case StartBlock:    return "Start";
    case Data:          return "Data";
    case Type:          return "Type";
    case EndBlock:      return "End";
    case Get:           return "Get";
    case Put:           return "Put";
    case If:            return "If";
    case Else:          return "Else";
    case Goto:          return "Goto";
    case For:           return "For";
    case To:            return "To";
    case Downto:        return "Downto";
    case Do:            return "Do";
    case While:         return "While";
    case Repeat:        return "Repeat";
    case Until:         return "Until";
    case Identifier:    return "Identifier";
    case Number:        return "Number";
    case Float:         return "Float";
    case Assign:        return "Assign";
    case Add:           return "Add";
    case Sub:           return "Sub";
    case Mod:           return "Mod";
    case Mul:           return "Mul";
    case Div:           return "Div";
    case Equality:      return "Equality";
    case NotEquality:   return "NotEquality";
    case Greate:        return "Greate";
    case Less:          return "Less";
    case Not:           return "Not";
    case And:           return "And";
    case Or:            return "Or";
    case LBracket:      return "LBracket";
    case RBracket:      return "RBracket";
    case Semicolon:     return "Semicolon";
    case Colon:         return "Colon";
    case Comma:         return "Comma";
    case Unknown_:      return "Unknown_";
    }

    return "Forgotten";
}
