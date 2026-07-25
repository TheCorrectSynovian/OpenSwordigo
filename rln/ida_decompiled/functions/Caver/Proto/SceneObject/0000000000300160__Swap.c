/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000300160
 * Mangled: _ZN5Caver5Proto11SceneObject4SwapEPS1_
 * Demangled: Caver::Proto::SceneObject::Swap(Caver::Proto::SceneObject*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 25
 *   insn=0x0000000000300178 string=0x000000000030017C "h\n@"
 *   insn=0x0000000000300184 string=0x0000000000300188 "a"
 *   insn=0x000000000030018C string=0x0000000000300190 "i\n"
 *   insn=0x0000000000300190 string=0x0000000000300194 "h"
 *   insn=0x000000000030019C string=0x00000000003001A0 "i"
 *   insn=0x00000000003001A0 string=0x00000000003001A4 "O"
 *   insn=0x00000000003001A4 string=0x00000000003001A8 "h.@"
 *   insn=0x00000000003001A4 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000003001B0 string=0x00000000003001B4 "i."
 *   insn=0x00000000003001B4 string=0x00000000003001B8 "hb@"
 *   insn=0x00000000003001C0 string=0x00000000003001C4 "ib"
 *   insn=0x00000000003001C4 string=0x00000000003001C8 "hf@"
 *   insn=0x00000000003001D0 string=0x00000000003001D4 "if"
 *   insn=0x00000000003001D4 string=0x00000000003001D8 "hj@"
 *   insn=0x00000000003001E0 string=0x00000000003001E4 "ij"
 *   insn=0x00000000003001E4 string=0x00000000003001E8 "h:@"
 *   insn=0x00000000003001F0 string=0x00000000003001F4 "i:"
 *   insn=0x00000000003001F4 string=0x00000000003001F8 "h"
 *   insn=0x0000000000300200 string=0x0000000000300204 "i"
 *   insn=0x0000000000300204 string=0x0000000000300208 "hB@"
 *   insn=0x0000000000300210 string=0x0000000000300214 "iB"
 *   insn=0x0000000000300214 string=0x0000000000300218 "h"
 *   insn=0x0000000000300220 string=0x0000000000300224 "i"
 *   insn=0x0000000000300224 string=0x0000000000300228 "h\n@"
 *   insn=0x0000000000300230 string=0x0000000000300234 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::SceneObject *__fastcall Caver::Proto::SceneObject::Swap(
        Caver::Proto::SceneObject *this,
        Caver::Proto::SceneObject *a2)
{
  Caver::Proto::SceneObject *v3; // x20
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
    v5 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v5;
    this = (Caver::Proto::SceneObject *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                          (Caver::Proto::SceneObject *)((char *)this + 32),
                                          (Caver::Proto::SceneObject *)((char *)a2 + 32));
    v6 = *((_QWORD *)v3 + 11);
    *((_QWORD *)v3 + 11) = *((_QWORD *)a2 + 11);
    *((_QWORD *)a2 + 11) = v6;
    LODWORD(v6) = *((_DWORD *)v3 + 24);
    *((_DWORD *)v3 + 24) = *((_DWORD *)a2 + 24);
    *((_DWORD *)a2 + 24) = v6;
    LODWORD(v6) = *((_DWORD *)v3 + 25);
    *((_DWORD *)v3 + 25) = *((_DWORD *)a2 + 25);
    *((_DWORD *)a2 + 25) = v6;
    LODWORD(v6) = *((_DWORD *)v3 + 26);
    *((_DWORD *)v3 + 26) = *((_DWORD *)a2 + 26);
    *((_DWORD *)a2 + 26) = v6;
    v7 = *((_QWORD *)v3 + 14);
    *((_QWORD *)v3 + 14) = *((_QWORD *)a2 + 14);
    *((_QWORD *)a2 + 14) = v7;
    LOBYTE(v7) = *((_BYTE *)v3 + 120);
    *((_BYTE *)v3 + 120) = *((_BYTE *)a2 + 120);
    *((_BYTE *)a2 + 120) = v7;
    v8 = *((_QWORD *)v3 + 16);
    *((_QWORD *)v3 + 16) = *((_QWORD *)a2 + 16);
    *((_QWORD *)a2 + 16) = v8;
    LODWORD(v8) = *((_DWORD *)v3 + 34);
    *((_DWORD *)v3 + 34) = *((_DWORD *)a2 + 34);
    *((_DWORD *)a2 + 34) = v8;
    LODWORD(v8) = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v8;
  }
  return this;
}

