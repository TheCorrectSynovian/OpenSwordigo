/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000301124
 * Mangled: _ZN5Caver5Proto16SceneObjectGroup4SwapEPS1_
 * Demangled: Caver::Proto::SceneObjectGroup::Swap(Caver::Proto::SceneObjectGroup*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 17
 *   insn=0x000000000030113C string=0x0000000000301140 "h\n@"
 *   insn=0x0000000000301148 string=0x000000000030114C "ab"
 *   insn=0x0000000000301150 string=0x0000000000301154 "i\n"
 *   insn=0x0000000000301154 string=0x0000000000301158 "b"
 *   insn=0x0000000000301158 string=0x000000000030115C "hBA9"
 *   insn=0x0000000000301158 string=0x00000000001F7EE0 "0'"
 *   insn=0x0000000000301164 string=0x0000000000301168 "iB"
 *   insn=0x0000000000301168 string=0x000000000030116C "hFA9"
 *   insn=0x0000000000301174 string=0x0000000000301178 "iF"
 *   insn=0x0000000000301178 string=0x000000000030117C "hJA9"
 *   insn=0x0000000000301184 string=0x0000000000301188 "iJ"
 *   insn=0x0000000000301188 string=0x000000000030118C "h.@"
 *   insn=0x0000000000301194 string=0x0000000000301198 "i."
 *   insn=0x0000000000301198 string=0x000000000030119C "hb@"
 *   insn=0x00000000003011A4 string=0x00000000003011A8 "ib"
 *   insn=0x00000000003011A8 string=0x00000000003011AC "h\n@"
 *   insn=0x00000000003011B4 string=0x00000000003011B8 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::SceneObjectGroup *__fastcall Caver::Proto::SceneObjectGroup::Swap(
        Caver::Proto::SceneObjectGroup *this,
        Caver::Proto::SceneObjectGroup *a2)
{
  Caver::Proto::SceneObjectGroup *v3; // x20
  __int64 v4; // x9
  char v5; // w9
  char v6; // w9
  char v7; // w9
  __int64 v8; // x9

  v3 = this;
  if ( a2 != this )
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v4;
    this = (Caver::Proto::SceneObjectGroup *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                               (Caver::Proto::SceneObjectGroup *)((char *)this + 24),
                                               (Caver::Proto::SceneObjectGroup *)((char *)a2 + 24));
    v5 = *((_BYTE *)v3 + 80);
    *((_BYTE *)v3 + 80) = *((_BYTE *)a2 + 80);
    *((_BYTE *)a2 + 80) = v5;
    v6 = *((_BYTE *)v3 + 81);
    *((_BYTE *)v3 + 81) = *((_BYTE *)a2 + 81);
    *((_BYTE *)a2 + 81) = v6;
    v7 = *((_BYTE *)v3 + 82);
    *((_BYTE *)v3 + 82) = *((_BYTE *)a2 + 82);
    *((_BYTE *)a2 + 82) = v7;
    v8 = *((_QWORD *)v3 + 11);
    *((_QWORD *)v3 + 11) = *((_QWORD *)a2 + 11);
    *((_QWORD *)a2 + 11) = v8;
    LODWORD(v8) = *((_DWORD *)v3 + 24);
    *((_DWORD *)v3 + 24) = *((_DWORD *)a2 + 24);
    *((_DWORD *)a2 + 24) = v8;
    LODWORD(v8) = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v8;
  }
  return this;
}

