/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000497FA8
 * Mangled: _ZN5Caver8GUILabel9ClearTextEv
 * Demangled: Caver::GUILabel::ClearText(void)
 *
 * Callers: 1
 *   0x00000000001F35B0  Caver::GUILabel::ClearText(void)
 *
 * Callees: 2
 *   0x00000000001F5200  Caver::FontText::Clear(void)
 *   0x000000000056918C  sub_56918C
 *
 * Referenced strings: 5
 *   insn=0x0000000000497FB8 string=0x0000000000497FBC "`"
 *   insn=0x0000000000497FBC string=0x0000000000497FC0 "!"
 *   insn=0x0000000000497FC4 string=0x0000000000497FC8 "qD"
 *   insn=0x0000000000497FC8 string=0x0000000000497FCC "`"
 *   insn=0x0000000000497FD8 string=0x00000000001F5200 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUILabel::ClearText(Caver::FontText **this)
{
  sub_56918C(this + 32, "", 0);
  Caver::FontText::Clear(this[36]);
}

