/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003010D0
 * Mangled: _ZN5Caver5Proto16SceneObjectGroup8CopyFromERKS1_
 * Demangled: Caver::Proto::SceneObjectGroup::CopyFrom(Caver::Proto::SceneObjectGroup const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEB80  Caver::Proto::SceneObjectGroup::MergeFrom(Caver::Proto::SceneObjectGroup const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000003010E4 string=0x00000000003010E8 "@"
 *   insn=0x00000000003010F0 string=0x00000000003010F4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SceneObjectGroup::CopyFrom(
        Caver::Proto::SceneObjectGroup *this,
        const Caver::Proto::SceneObjectGroup *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SceneObjectGroup *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SceneObjectGroup::MergeFrom();
  }
}

