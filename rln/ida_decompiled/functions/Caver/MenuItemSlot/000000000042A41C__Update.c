/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042A41C
 * Mangled: _ZN5Caver12MenuItemSlot6UpdateEf
 * Demangled: Caver::MenuItemSlot::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 4
 *   insn=0x000000000042A428 string=0x000000000042A42C ""
 *   insn=0x000000000042A434 string=0x000000000042A438 "h"
 *   insn=0x000000000042A43C string=0x000000000042A440 "`~B"
 *   insn=0x000000000042A444 string=0x000000000042A448 "`~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MenuItemSlot::Update(Caver::MenuItemSlot *this, float a2)
{
  __int64 result; // x0

  result = Caver::GUIView::Update(this, a2);
  if ( *((_BYTE *)this + 632) )
    *((float *)this + 159) = *((float *)this + 159) + a2;
  return result;
}

