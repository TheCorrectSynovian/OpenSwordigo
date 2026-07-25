/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2B88
 * Mangled: _ZN5Caver5Proto24CharacterState_ItemState5ClearEv
 * Demangled: Caver::Proto::CharacterState_ItemState::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 7
 *   insn=0x00000000002F2B94 string=0x00000000002F2B98 "hr@9"
 *   insn=0x00000000002F2B9C string=0x00000000002F2BA0 "h"
 *   insn=0x00000000002F2BA4 string=0x00000000002F2BA8 "`\n@"
 *   insn=0x00000000002F2BA8 string=0x00000000002F2BAC ")G"
 *   insn=0x00000000002F2BB4 string=0x00000000002F2BB8 ""
 *   insn=0x00000000002F2BC4 string=0x00000000002F2BC8 "<"
 *   insn=0x00000000002F2BCC string=0x00000000002F2BD0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState_ItemState::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( *(_BYTE *)(this + 28) )
  {
    if ( (*(_BYTE *)(this + 28) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::CharacterState_ItemState::_default_name_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_DWORD *)(v1 + 24) = 1;
  }
  *(_DWORD *)(v1 + 28) = 0;
  return this;
}

