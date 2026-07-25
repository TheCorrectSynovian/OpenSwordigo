/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3BA0
 * Mangled: _ZN5Caver5Proto23GuideTarget_LevelObject8CopyFromERKS1_
 * Demangled: Caver::Proto::GuideTarget_LevelObject::CopyFrom(Caver::Proto::GuideTarget_LevelObject const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9840  Caver::Proto::GuideTarget_LevelObject::MergeFrom(Caver::Proto::GuideTarget_LevelObject const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002E3BB4 string=0x00000000002E3BB8 "@"
 *   insn=0x00000000002E3BC0 string=0x00000000002E3BC4 ""
 *   insn=0x00000000002E3BDC string=0x00000000001F9840 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GuideTarget_LevelObject::CopyFrom(
        Caver::Proto::GuideTarget_LevelObject *this,
        const Caver::Proto::GuideTarget_LevelObject *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::GuideTarget_LevelObject *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::GuideTarget_LevelObject::MergeFrom(this, a2);
  }
}

