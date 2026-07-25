/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D74DC
 * Mangled: _ZN5Caver5Proto13GUIViewLayout4SwapEPS1_
 * Demangled: Caver::Proto::GUIViewLayout::Swap(Caver::Proto::GUIViewLayout*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 11
 *   insn=0x00000000002D74F4 string=0x00000000002D74F8 "h\n@"
 *   insn=0x00000000002D7500 string=0x00000000002D7504 "ab"
 *   insn=0x00000000002D7508 string=0x00000000002D750C "i\n"
 *   insn=0x00000000002D750C string=0x00000000002D7510 "t"
 *   insn=0x00000000002D7510 string=0x00000000002D7514 "h*@"
 *   insn=0x00000000002D7510 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002D751C string=0x00000000002D7520 "i*"
 *   insn=0x00000000002D7520 string=0x00000000002D7524 "hZ@"
 *   insn=0x00000000002D752C string=0x00000000002D7530 "iZ"
 *   insn=0x00000000002D7530 string=0x00000000002D7534 "h\n@"
 *   insn=0x00000000002D753C string=0x00000000002D7540 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::GUIViewLayout *__fastcall Caver::Proto::GUIViewLayout::Swap(
        Caver::Proto::GUIViewLayout *this,
        Caver::Proto::GUIViewLayout *a2)
{
  Caver::Proto::GUIViewLayout *v3; // x20
  __int64 v4; // x9
  __int64 v5; // x9

  v3 = this;
  if ( a2 != this )
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v4;
    this = (Caver::Proto::GUIViewLayout *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                            (Caver::Proto::GUIViewLayout *)((char *)this + 24),
                                            (Caver::Proto::GUIViewLayout *)((char *)a2 + 24));
    v5 = *((_QWORD *)v3 + 10);
    *((_QWORD *)v3 + 10) = *((_QWORD *)a2 + 10);
    *((_QWORD *)a2 + 10) = v5;
    LODWORD(v5) = *((_DWORD *)v3 + 22);
    *((_DWORD *)v3 + 22) = *((_DWORD *)a2 + 22);
    *((_DWORD *)a2 + 22) = v5;
    LODWORD(v5) = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

