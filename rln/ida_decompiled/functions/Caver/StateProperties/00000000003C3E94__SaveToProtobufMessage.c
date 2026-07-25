/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3E94
 * Mangled: _ZNK5Caver15StateProperties21SaveToProtobufMessageEPNS_5Proto15StatePropertiesE
 * Demangled: Caver::StateProperties::SaveToProtobufMessage(Caver::Proto::StateProperties *)
 *
 * Callers: 1
 *   0x00000000001F73F0  Caver::StateProperties::SaveToProtobufMessage(Caver::Proto::StateProperties *)
 *
 * Callees: 4
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 20
 *   insn=0x00000000003C3EB4 string=0x00000000003C3EB8 "@"
 *   insn=0x00000000003C3EB8 string=0x00000000003C3EBC "uB"
 *   insn=0x00000000003C3EBC string=0x00000000003C3EC0 "i"C)"
 *   insn=0x00000000003C3EC4 string=0x00000000003C3EC8 ")}@"
 *   insn=0x00000000003C3EC8 string=0x00000000003C3ECC "?"
 *   insn=0x00000000003C3ED0 string=0x00000000003C3ED4 "h\n@"
 *   insn=0x00000000003C3ED0 string=0x00000000003C3EE8 "i"@"
 *   insn=0x00000000003C3ED4 string=0x00000000003C3ED8 "*"
 *   insn=0x00000000003C3ED8 string=0x00000000003C3EDC "j"
 *   insn=0x00000000003C3EF0 string=0x00000000003C3F04 ""
 *   insn=0x00000000003C3EFC string=0x00000000003C3F00 "h"
 *   insn=0x00000000003C3EFC string=0x00000000001FAD20 "0'"
 *   insn=0x00000000003C3F04 string=0x00000000003C3F08 "h"
 *   insn=0x00000000003C3F0C string=0x00000000003C3F10 "h"
 *   insn=0x00000000003C3F0C string=0x00000000001F4A00 "P'"
 *   insn=0x00000000003C3F10 string=0x00000000003C3F14 "i\n@"
 *   insn=0x00000000003C3F14 string=0x00000000003C3F18 "\n"
 *   insn=0x00000000003C3F18 string=0x00000000003C3F1C "j"
 *   insn=0x00000000003C3F1C string=0x00000000003C3F20 " y("
 *   insn=0x00000000003C3F38 string=0x00000000003C3F3C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

google::protobuf::internal::StringTypeHandlerBase *__fastcall Caver::StateProperties::SaveToProtobufMessage(
        google::protobuf::internal::StringTypeHandlerBase *this,
        Caver::Proto::StateProperties *a2)
{
  google::protobuf::internal::StringTypeHandlerBase *v2; // x20
  google::protobuf::internal::StringTypeHandlerBase *v3; // x23
  int v5; // w8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x8
  __int64 v10; // x9

  v2 = (google::protobuf::internal::StringTypeHandlerBase *)*((_QWORD *)this + 3);
  v3 = (google::protobuf::internal::StringTypeHandlerBase *)((char *)this + 8);
  if ( (google::protobuf::internal::StringTypeHandlerBase *)((char *)this + 8) != v2 )
  {
    do
    {
      v5 = *((_DWORD *)a2 + 7);
      v6 = *((int *)a2 + 6);
      if ( (int)v6 >= v5 )
      {
        if ( v5 == *((_DWORD *)a2 + 8) )
        {
          this = (google::protobuf::internal::StringTypeHandlerBase *)google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                                                                        (Caver::Proto::StateProperties *)((char *)a2 + 16),
                                                                        v5 + 1);
          v5 = *((_DWORD *)a2 + 7);
        }
        *((_DWORD *)a2 + 7) = v5 + 1;
        v8 = google::protobuf::internal::StringTypeHandlerBase::New(this);
        v9 = *((int *)a2 + 6);
        v10 = *((_QWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) = v9 + 1;
        *(_QWORD *)(v10 + 8 * v9) = v8;
      }
      else
      {
        v7 = *((_QWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) = v6 + 1;
        v8 = *(_QWORD *)(v7 + 8 * v6);
      }
      sub_56A6A8(v8);
      this = (google::protobuf::internal::StringTypeHandlerBase *)sub_54C6A0(v2);
      v2 = this;
    }
    while ( v3 != this );
  }
  return this;
}

