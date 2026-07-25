/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2F10
 * Mangled: _ZN5Caver5Proto24CharacterState_ItemState4SwapEPS1_
 * Demangled: Caver::Proto::CharacterState_ItemState::Swap(Caver::Proto::CharacterState_ItemState*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000002F2F10 string=0x00000000002F2F14 " "
 *   insn=0x00000000002F2F14 string=0x00000000002F2F18 "(@"
 *   insn=0x00000000002F2F18 string=0x00000000002F2F1C "\t@"
 *   insn=0x00000000002F2F1C string=0x00000000002F2F20 ""
 *   insn=0x00000000002F2F20 string=0x00000000002F2F24 ")"
 *   insn=0x00000000002F2F24 string=0x00000000002F2F28 "("
 *   insn=0x00000000002F2F28 string=0x00000000002F2F2C "\t"
 *   insn=0x00000000002F2F2C string=0x00000000002F2F30 ""
 *   insn=0x00000000002F2F30 string=0x00000000002F2F34 ")"
 *   insn=0x00000000002F2F34 string=0x00000000002F2F38 "("
 *   insn=0x00000000002F2F38 string=0x00000000002F2F3C "\t"
 *   insn=0x00000000002F2F3C string=0x00000000002F2F40 ""
 *   insn=0x00000000002F2F40 string=0x00000000002F2F44 ")"
 *   insn=0x00000000002F2F44 string=0x00000000002F2F48 "(@"
 *   insn=0x00000000002F2F48 string=0x00000000002F2F4C "\t@"
 *   insn=0x00000000002F2F4C string=0x00000000002F2F50 ""
 *   insn=0x00000000002F2F50 string=0x00000000002F2F54 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState_ItemState::Swap(
        __int64 this,
        Caver::Proto::CharacterState_ItemState *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::CharacterState_ItemState *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

