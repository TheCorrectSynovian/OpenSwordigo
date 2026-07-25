/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032E4EC
 * Mangled: _ZN5Caver5Proto24CollectableItemComponent5ClearEv
 * Demangled: Caver::Proto::CollectableItemComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 12
 *   insn=0x000000000032E4F8 string=0x000000000032E4FC "h"
 *   insn=0x000000000032E50C string=0x000000000032E510 "`"
 *   insn=0x000000000032E510 string=0x000000000032E514 ")5G"
 *   insn=0x000000000032E51C string=0x000000000032E520 ""
 *   insn=0x000000000032E530 string=0x000000000032E534 "h:@"
 *   insn=0x000000000032E53C string=0x000000000032E540 "`"
 *   insn=0x000000000032E540 string=0x000000000032E544 ")"
 *   insn=0x000000000032E54C string=0x000000000032E550 ""
 *   insn=0x000000000032E560 string=0x000000000032E564 "h:@"
 *   insn=0x000000000032E56C string=0x000000000032E570 "`"
 *   insn=0x000000000032E570 string=0x000000000032E574 "@"
 *   insn=0x000000000032E578 string=0x00000000001F4DE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollectableItemComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 56);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = 0;
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(this + 24);
      if ( (__int64 *)this != &Caver::Proto::CollectableItemComponent::_default_item_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 56);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( (__int64 *)this != &Caver::Proto::CollectableItemComponent::_default_identifier_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 56);
      }
    }
    *(_BYTE *)(v1 + 40) = 0;
    if ( (v2 & 0x20) != 0 )
    {
      this = *(_QWORD *)(v1 + 48);
      if ( this )
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
    }
  }
  *(_DWORD *)(v1 + 56) = 0;
  return this;
}

