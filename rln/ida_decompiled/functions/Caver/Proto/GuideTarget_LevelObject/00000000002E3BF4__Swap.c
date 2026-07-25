/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3BF4
 * Mangled: _ZN5Caver5Proto23GuideTarget_LevelObject4SwapEPS1_
 * Demangled: Caver::Proto::GuideTarget_LevelObject::Swap(Caver::Proto::GuideTarget_LevelObject*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000002E3BF4 string=0x00000000002E3BF8 " "
 *   insn=0x00000000002E3BF8 string=0x00000000002E3BFC "(@"
 *   insn=0x00000000002E3BFC string=0x00000000002E3C00 "\t@"
 *   insn=0x00000000002E3C00 string=0x00000000002E3C04 ""
 *   insn=0x00000000002E3C04 string=0x00000000002E3C08 ")"
 *   insn=0x00000000002E3C08 string=0x00000000002E3C0C "("
 *   insn=0x00000000002E3C0C string=0x00000000002E3C10 "\t"
 *   insn=0x00000000002E3C10 string=0x00000000002E3C14 ""
 *   insn=0x00000000002E3C14 string=0x00000000002E3C18 ")"
 *   insn=0x00000000002E3C18 string=0x00000000002E3C1C "( @"
 *   insn=0x00000000002E3C1C string=0x00000000002E3C20 "\t @"
 *   insn=0x00000000002E3C20 string=0x00000000002E3C24 " "
 *   insn=0x00000000002E3C24 string=0x00000000002E3C28 ") "
 *   insn=0x00000000002E3C28 string=0x00000000002E3C2C "(@"
 *   insn=0x00000000002E3C2C string=0x00000000002E3C30 "\t@"
 *   insn=0x00000000002E3C30 string=0x00000000002E3C34 ""
 *   insn=0x00000000002E3C34 string=0x00000000002E3C38 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget_LevelObject::Swap(__int64 this, Caver::Proto::GuideTarget_LevelObject *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::GuideTarget_LevelObject *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v3;
  }
  return this;
}

