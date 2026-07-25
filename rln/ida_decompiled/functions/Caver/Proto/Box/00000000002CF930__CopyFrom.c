/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF930
 * Mangled: _ZN5Caver5Proto3Box8CopyFromERKS1_
 * Demangled: Caver::Proto::Box::CopyFrom(Caver::Proto::Box const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201AD0  Caver::Proto::Box::MergeFrom(Caver::Proto::Box const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002CF944 string=0x00000000002CF948 "@"
 *   insn=0x00000000002CF950 string=0x00000000002CF954 ""
 *   insn=0x00000000002CF968 string=0x00000000002CF96C "Y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Box::CopyFrom(Caver::Proto::Box *this, const Caver::Proto::Box *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Box *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Box::MergeFrom(this, a2);
  }
}

