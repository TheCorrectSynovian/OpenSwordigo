/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000338FAC
 * Mangled: _ZN5Caver5Proto12MeshMaterial8CopyFromERKS1_
 * Demangled: Caver::Proto::MeshMaterial::CopyFrom(Caver::Proto::MeshMaterial const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202650  Caver::Proto::MeshMaterial::MergeFrom(Caver::Proto::MeshMaterial const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000338FC0 string=0x0000000000338FC4 "@"
 *   insn=0x0000000000338FCC string=0x0000000000338FD0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MeshMaterial::CopyFrom(
        Caver::Proto::MeshMaterial *this,
        const Caver::Proto::MeshMaterial *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MeshMaterial *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MeshMaterial::MergeFrom(this, a2);
  }
}

