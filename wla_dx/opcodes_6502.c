struct optcode opt_table[] = {
  { "ADC #x", 0x69, 4, 0 },
  { "ADC (x,X)", 0x61, 4, 0 },
  { "ADC (x),Y", 0x71, 4, 0 },
  { "ADC x,X", 0x75, 4, 1 },
  { "ADC ?,X", 0x7D, 2, 0 },
  { "ADC ?,Y", 0x79, 2, 0 },
  { "ADC x", 0x65, 4, 1 },
  { "ADC ?", 0x6D, 2, 0 },
  { "ADC.B #x", 0x69, 4, 0 },
  { "ADC.B (x,X)", 0x61, 4, 0 },
  { "ADC.B (x),Y", 0x71, 4, 0 },
  { "ADC.B x,X", 0x75, 4, 0 },
  { "ADC.W ?,X", 0x7D, 2, 0 },
  { "ADC.W ?,Y", 0x79, 2, 0 },
  { "ADC.B x", 0x65, 4, 0 },
  { "ADC.W ?", 0x6D, 2, 0 },

  { "AND #x", 0x29, 4, 0 },
  { "AND (x,X)", 0x21, 4, 0 },
  { "AND (x),Y", 0x31, 4, 0 },
  { "AND x,X", 0x35, 4, 1 },
  { "AND ?,X", 0x3D, 2, 0 },
  { "AND ?,Y", 0x39, 2, 0 },
  { "AND x", 0x25, 4, 1 },
  { "AND ?", 0x2D, 2, 0 },
  { "AND.B #x", 0x29, 4, 0 },
  { "AND.B (x,X)", 0x21, 4, 0 },
  { "AND.B (x),Y", 0x31, 4, 0 },
  { "AND.B x,X", 0x35, 4, 0 },
  { "AND.W ?,X", 0x3D, 2, 0 },
  { "AND.W ?,Y", 0x39, 2, 0 },
  { "AND.B x", 0x25, 4, 0 },
  { "AND.W ?", 0x2D, 2, 0 },

  { "ASL A", 0x0A, 0, 0 },
  { "ASL x,X", 0x16, 4, 1 },
  { "ASL ?,X", 0x1E, 2, 0 },
  { "ASL x", 0x06, 4, 1 },
  { "ASL ?", 0x0E, 2, 0 },
  { "ASL.B x,X", 0x16, 4, 0 },
  { "ASL.W ?,X", 0x1E, 2, 0 },
  { "ASL.B x", 0x06, 4, 0 },
  { "ASL.W ?", 0x0E, 2, 0 },
  { "ASL", 0x0A, 0, 0 },

  { "BCC x", 0x90, 5, 0 },
  { "BCS x", 0xB0, 5, 0 },
  { "BEQ x", 0xF0, 5, 0 },
  { "BIT x", 0x24, 4, 1 },
  { "BIT ?", 0x2C, 2, 0 },
  { "BMI x", 0x30, 5, 0 },
  { "BNE x", 0xD0, 5, 0 },
  { "BPL x", 0x10, 5, 0 },
  { "BVC x", 0x50, 5, 0 },
  { "BVS x", 0x70, 5, 0 },
  { "BCC.B x", 0x90, 5, 0 },
  { "BCS.B x", 0xB0, 5, 0 },
  { "BEQ.B x", 0xF0, 5, 0 },
  { "BIT.B x", 0x24, 4, 0 },
  { "BIT.W ?", 0x2C, 2, 0 },
  { "BMI.B x", 0x30, 5, 0 },
  { "BNE.B x", 0xD0, 5, 0 },
  { "BPL.B x", 0x10, 5, 0 },
  { "BVC.B x", 0x50, 5, 0 },
  { "BVS.B x", 0x70, 5, 0 },

  { "BRK x", 0x00, 4, 0 },
  { "BRK.B x", 0x00, 4, 0 },
  { "BRK", 0x0000, 3, 0 },

  { "CLC", 0x18, 0, 0 },
  { "CLD", 0xD8, 0, 0 },
  { "CLI", 0x58, 0, 0 },
  { "CLV", 0xB8, 0, 0 },

  { "CMP #x", 0xC9, 4, 0 },
  { "CMP (x,X)", 0xC1, 4, 0 },
  { "CMP (x),Y", 0xD1, 4, 0 },
  { "CMP x,X", 0xD5, 4, 1 },
  { "CMP ?,X", 0xDD, 2, 0 },
  { "CMP ?,Y", 0xD9, 2, 0 },
  { "CMP x", 0xC5, 4, 1 },
  { "CMP ?", 0xCD, 2, 0 },
  { "CMP.B #x", 0xC9, 4, 0 },
  { "CMP.B (x,X)", 0xC1, 4, 0 },
  { "CMP.B (x),Y", 0xD1, 4, 0 },
  { "CMP.B x,X", 0xD5, 4, 0 },
  { "CMP.W ?,X", 0xDD, 2, 0 },
  { "CMP.W ?,Y", 0xD9, 2, 0 },
  { "CMP.B x", 0xC5, 4, 0 },
  { "CMP.W ?", 0xCD, 2, 0 },

  { "CPX #x", 0xE0, 4, 0 },
  { "CPX x", 0xE4, 4, 1 },
  { "CPX ?", 0xEC, 2, 0 },
  { "CPX.B #x", 0xE0, 4, 0 },
  { "CPX.B x", 0xE4, 4, 0 },
  { "CPX.W ?", 0xEC, 2, 0 },

  { "CPY #x", 0xC0, 4, 0 },
  { "CPY x", 0xC4, 4, 1 },
  { "CPY ?", 0xCC, 2, 0 },
  { "CPY.B #x", 0xC0, 4, 0 },
  { "CPY.B x", 0xC4, 4, 0 },
  { "CPY.W ?", 0xCC, 2, 0 },

  { "DEC x,X", 0xD6, 4, 1 },
  { "DEC ?,X", 0xDE, 2, 0 },
  { "DEC x", 0xC6, 4, 1 },
  { "DEC ?", 0xCE, 2, 0 },
  { "DEX", 0xCA, 0, 0 },
  { "DEY", 0x88, 0, 0 },
  { "DEC.B x,X", 0xD6, 4, 0 },
  { "DEC.W ?,X", 0xDE, 2, 0 },
  { "DEC.B x", 0xC6, 4, 0 },
  { "DEC.W ?", 0xCE, 2, 0 },

  { "EOR #x", 0x49, 4, 0 },
  { "EOR (x,X)", 0x41, 4, 0 },
  { "EOR (x),Y", 0x51, 4, 0 },
  { "EOR x,X", 0x55, 4, 1 },
  { "EOR ?,X", 0x5D, 2, 0 },
  { "EOR ?,Y", 0x59, 2, 0 },
  { "EOR x", 0x45, 4, 1 },
  { "EOR ?", 0x4D, 2, 0 },
  { "EOR.B #x", 0x49, 4, 0 },
  { "EOR.B (x,X)", 0x41, 4, 0 },
  { "EOR.B (x),Y", 0x51, 4, 0 },
  { "EOR.B x,X", 0x55, 4, 0 },
  { "EOR.W ?,X", 0x5D, 2, 0 },
  { "EOR.W ?,Y", 0x59, 2, 0 },
  { "EOR.B x", 0x45, 4, 0 },
  { "EOR.W ?", 0x4D, 2, 0 },

  { "INC x,X", 0xF6, 4, 1 },
  { "INC ?,X", 0xFE, 2, 0 },
  { "INC x", 0xE6, 4, 1 },
  { "INC ?", 0xEE, 2, 0 },
  { "INX", 0xE8, 0, 0 },
  { "INY", 0xC8, 0, 0 },
  { "INC.B x,X", 0xF6, 4, 0 },
  { "INC.W ?,X", 0xFE, 2, 0 },
  { "INC.B x", 0xE6, 4, 0 },
  { "INC.W ?", 0xEE, 2, 0 },

  { "JMP (?)", 0x6C, 2, 0 },
  { "JMP ?", 0x4C, 2, 0 },
  { "JSR ?", 0x20, 2, 0 },
  { "JMP.W (?)", 0x6C, 2, 0 },
  { "JMP.W ?", 0x4C, 2, 0 },
  { "JSR.W ?", 0x20, 2, 0 },

  { "LDA #x", 0xA9, 4, 0 },
  { "LDA (x,X)", 0xA1, 4, 0 },
  { "LDA (x),Y", 0xB1, 4, 0 },
  { "LDA x,X", 0xB5, 4, 1 },
  { "LDA ?,X", 0xBD, 2, 0 },
  { "LDA ?,Y", 0xB9, 2, 0 },
  { "LDA x", 0xA5, 4, 1 },
  { "LDA ?", 0xAD, 2, 0 },
  { "LDA.B #x", 0xA9, 4, 0 },
  { "LDA.B (x,X)", 0xA1, 4, 0 },
  { "LDA.B (x),Y", 0xB1, 4, 0 },
  { "LDA.B x,X", 0xB5, 4, 0 },
  { "LDA.W ?,X", 0xBD, 2, 0 },
  { "LDA.W ?,Y", 0xB9, 2, 0 },
  { "LDA.B x", 0xA5, 4, 0 },
  { "LDA.W ?", 0xAD, 2, 0 },

  { "LDX #x", 0xA2, 4, 0 },
  { "LDX x,Y", 0xB6, 4, 1 },
  { "LDX ?,Y", 0xBE, 2, 0 },
  { "LDX x", 0xA6, 4, 1 },
  { "LDX ?", 0xAE, 2, 0 },
  { "LDX.B #x", 0xA2, 4, 0 },
  { "LDX.B x,Y", 0xB6, 4, 0 },
  { "LDX.W ?,Y", 0xBE, 2, 0 },
  { "LDX.B x", 0xA6, 4, 0 },
  { "LDX.W ?", 0xAE, 2, 0 },

  { "LDY #x", 0xA0, 4, 0 },
  { "LDY x,X", 0xB4, 4, 1 },
  { "LDY ?,X", 0xBC, 2, 0 },
  { "LDY x", 0xA4, 4, 1 },
  { "LDY ?", 0xAC, 2, 0 },
  { "LDY.B #x", 0xA0, 4, 0 },
  { "LDY.B x,X", 0xB4, 4, 0 },
  { "LDY.W ?,X", 0xBC, 2, 0 },
  { "LDY.B x", 0xA4, 4, 0 },
  { "LDY.W ?", 0xAC, 2, 0 },

  { "LSR A", 0x4A, 0, 0 },
  { "LSR x,X", 0x56, 4, 1 },
  { "LSR ?,X", 0x5E, 2, 0 },
  { "LSR x", 0x46, 4, 1 },
  { "LSR ?", 0x4E, 2, 0 },
  { "LSR.B x,X", 0x56, 4, 0 },
  { "LSR.W ?,X", 0x5E, 2, 0 },
  { "LSR.B x", 0x46, 4, 0 },
  { "LSR.W ?", 0x4E, 2, 0 },
  { "LSR", 0x4A, 0, 0 },

  { "NOP", 0xEA, 0, 0 },

  { "ORA #x", 0x09, 4, 0 },
  { "ORA (x,X)", 0x01, 4, 0 },
  { "ORA (x),Y", 0x11, 4, 0 },
  { "ORA x,X", 0x15, 4, 1 },
  { "ORA ?,X", 0x1D, 2, 0 },
  { "ORA ?,Y", 0x19, 2, 0 },
  { "ORA x", 0x05, 4, 1 },
  { "ORA ?", 0x0D, 2, 0 },
  { "ORA.B #x", 0x09, 4, 0 },
  { "ORA.B (x,X)", 0x01, 4, 0 },
  { "ORA.B (x),Y", 0x11, 4, 0 },
  { "ORA.B x,X", 0x15, 4, 0 },
  { "ORA.W ?,X", 0x1D, 2, 0 },
  { "ORA.W ?,Y", 0x19, 2, 0 },
  { "ORA.B x", 0x05, 4, 0 },
  { "ORA.W ?", 0x0D, 2, 0 },

  { "PHA", 0x48, 0, 0 },
  { "PHP", 0x08, 0, 0 },
  { "PLA", 0x68, 0, 0 },
  { "PLP", 0x28, 0, 0 },

  { "ROL A", 0x2A, 0, 0 },
  { "ROL x,X", 0x36, 4, 1 },
  { "ROL ?,X", 0x3E, 2, 0 },
  { "ROL x", 0x26, 4, 1 },
  { "ROL ?", 0x2E, 2, 0 },
  { "ROL.B x,X", 0x36, 4, 0 },
  { "ROL.W ?,X", 0x3E, 2, 0 },
  { "ROL.B x", 0x26, 4, 0 },
  { "ROL.W ?", 0x2E, 2, 0 },
  { "ROL", 0x2A, 0, 0 },

  { "ROR A", 0x6A, 0, 0 },
  { "ROR x,X", 0x76, 4, 1 },
  { "ROR ?,X", 0x7E, 2, 0 },
  { "ROR x", 0x66, 4, 1 },
  { "ROR ?", 0x6E, 2, 0 },
  { "ROR.B x,X", 0x76, 4, 0 },
  { "ROR.W ?,X", 0x7E, 2, 0 },
  { "ROR.B x", 0x66, 4, 0 },
  { "ROR.W ?", 0x6E, 2, 0 },
  { "ROR", 0x6A, 0, 0 },

  { "RTI", 0x40, 0, 0 },
  { "RTS", 0x60, 0, 0 },

  { "SBC #x", 0xE9, 4, 0 },
  { "SBC (x,X)", 0xE1, 4, 0 },
  { "SBC (x),Y", 0xF1, 4, 0 },
  { "SBC x,X", 0xF5, 4, 1 },
  { "SBC ?,X", 0xFD, 2, 0 },
  { "SBC ?,Y", 0xF9, 2, 0 },
  { "SBC x", 0xE5, 4, 1 },
  { "SBC ?", 0xED, 2, 0 },
  { "SBC.B #x", 0xE9, 4, 0 },
  { "SBC.B (x,X)", 0xE1, 4, 0 },
  { "SBC.B (x),Y", 0xF1, 4, 0 },
  { "SBC.B x,X", 0xF5, 4, 0 },
  { "SBC.W ?,X", 0xFD, 2, 0 },
  { "SBC.W ?,Y", 0xF9, 2, 0 },
  { "SBC.B x", 0xE5, 4, 0 },
  { "SBC.W ?", 0xED, 2, 0 },

  { "SEC", 0x38, 0, 0 },
  { "SED", 0xF8, 0, 0 },
  { "SEI", 0x78, 0, 0 },

  { "STA (x,X)", 0x81, 4, 0 },
  { "STA (x),Y", 0x91, 4, 0 },
  { "STA x,X", 0x95, 4, 1 },
  { "STA ?,X", 0x9D, 2, 0 },
  { "STA ?,Y", 0x99, 2, 0 },
  { "STA x", 0x85, 4, 1 },
  { "STA ?", 0x8D, 2, 0 },
  { "STA.B (x,X)", 0x81, 4, 0 },
  { "STA.B (x),Y", 0x91, 4, 0 },
  { "STA.B x,X", 0x95, 4, 0 },
  { "STA.W ?,X", 0x9D, 2, 0 },
  { "STA.W ?,Y", 0x99, 2, 0 },
  { "STA.B x", 0x85, 4, 0 },
  { "STA.W ?", 0x8D, 2, 0 },

  { "STX x,Y", 0x96, 4, 0 },
  { "STX x", 0x86, 4, 1 },
  { "STX ?", 0x8E, 2, 0 },
  { "STX.B x,Y", 0x96, 4, 0 },
  { "STX.B x", 0x86, 4, 0 },
  { "STX.W ?", 0x8E, 2, 0 },

  { "STY x,X", 0x94, 4, 0 },
  { "STY x", 0x84, 4, 1 },
  { "STY ?", 0x8C, 2, 0 },
  { "STY.B x,X", 0x94, 4, 0 },
  { "STY.B x", 0x84, 4, 0 },
  { "STY.W ?", 0x8C, 2, 0 },

  { "TAX", 0xAA, 0, 0 },
  { "TAY", 0xA8, 0, 0 },
  { "TSX", 0xBA, 0, 0 },
  { "TXA", 0x8A, 0, 0 },
  { "TXS", 0x9A, 0, 0 },
  { "TYA", 0x98, 0, 0 },

  { "E", 0x100, -1, 0 }
};
