/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DB2CC
 * Mangled: _ZN5Caver5Proto15EditorViewState4SwapEPS1_
 * Demangled: Caver::Proto::EditorViewState::Swap(Caver::Proto::EditorViewState*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 18
 *   insn=0x00000000002DB2E4 string=0x00000000002DB2E8 "h\n@"
 *   insn=0x00000000002DB2F0 string=0x00000000002DB2F4 "ab"
 *   insn=0x00000000002DB2F8 string=0x00000000002DB2FC "i\n"
 *   insn=0x00000000002DB300 string=0x00000000002DB304 "h*@"
 *   insn=0x00000000002DB300 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002DB30C string=0x00000000002DB310 "i*"
 *   insn=0x00000000002DB310 string=0x00000000002DB314 "h.@"
 *   insn=0x00000000002DB31C string=0x00000000002DB320 "i."
 *   insn=0x00000000002DB320 string=0x00000000002DB324 "hb@"
 *   insn=0x00000000002DB32C string=0x00000000002DB330 "ib"
 *   insn=0x00000000002DB330 string=0x00000000002DB334 "h6@"
 *   insn=0x00000000002DB33C string=0x00000000002DB340 "i6"
 *   insn=0x00000000002DB340 string=0x00000000002DB344 "h:@"
 *   insn=0x00000000002DB34C string=0x00000000002DB350 "i:"
 *   insn=0x00000000002DB350 string=0x00000000002DB354 "hz@"
 *   insn=0x00000000002DB35C string=0x00000000002DB360 "iz"
 *   insn=0x00000000002DB360 string=0x00000000002DB364 "h\n@"
 *   insn=0x00000000002DB36C string=0x00000000002DB370 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::EditorViewState *__fastcall Caver::Proto::EditorViewState::Swap(
        Caver::Proto::EditorViewState *this,
        Caver::Proto::EditorViewState *a2)
{
  Caver::Proto::EditorViewState *v3; // x20
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x9
  __int64 v8; // x9

  v3 = this;
  if ( a2 != this )
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v4;
    this = (Caver::Proto::EditorViewState *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                              (Caver::Proto::EditorViewState *)((char *)this + 24),
                                              (Caver::Proto::EditorViewState *)((char *)a2 + 24));
    v5 = *((_QWORD *)v3 + 10);
    *((_QWORD *)v3 + 10) = *((_QWORD *)a2 + 10);
    *((_QWORD *)a2 + 10) = v5;
    v6 = *((_QWORD *)v3 + 11);
    *((_QWORD *)v3 + 11) = *((_QWORD *)a2 + 11);
    *((_QWORD *)a2 + 11) = v6;
    LODWORD(v6) = *((_DWORD *)v3 + 24);
    *((_DWORD *)v3 + 24) = *((_DWORD *)a2 + 24);
    *((_DWORD *)a2 + 24) = v6;
    v7 = *((_QWORD *)v3 + 13);
    *((_QWORD *)v3 + 13) = *((_QWORD *)a2 + 13);
    *((_QWORD *)a2 + 13) = v7;
    v8 = *((_QWORD *)v3 + 14);
    *((_QWORD *)v3 + 14) = *((_QWORD *)a2 + 14);
    *((_QWORD *)a2 + 14) = v8;
    LODWORD(v8) = *((_DWORD *)v3 + 30);
    *((_DWORD *)v3 + 30) = *((_DWORD *)a2 + 30);
    *((_DWORD *)a2 + 30) = v8;
    LODWORD(v8) = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v8;
  }
  return this;
}

