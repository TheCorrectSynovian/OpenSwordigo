/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042A548
 * Mangled: _ZN5Caver12MenuItemSlot11SetSelectedEb
 * Demangled: Caver::MenuItemSlot::SetSelected(bool)
 *
 * Callers: 1
 *   0x00000000001F5920  Caver::MenuItemSlot::SetSelected(bool)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000042A548 string=0x000000000042A54C "("
 *   insn=0x000000000042A550 string=0x000000000042A554 "@"
 *   insn=0x000000000042A554 string=0x000000000042A558 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MenuItemSlot::SetSelected(__int64 this, char a2)
{
  if ( (a2 & 1) != *(_BYTE *)(this + 289) )
    *(_BYTE *)(this + 289) = a2 & 1;
  return this;
}

