/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3BB4
 * Mangled: _ZNK5Caver9QuestText21SaveToProtobufMessageEPNS_5Proto9QuestTextE
 * Demangled: Caver::QuestText::SaveToProtobufMessage(Caver::Proto::QuestText *)
 *
 * Callers: 1
 *   0x0000000000201580  Caver::QuestText::SaveToProtobufMessage(Caver::Proto::QuestText *)
 *
 * Callees: 4
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 33
 *   insn=0x00000000003C3BC4 string=0x00000000003C3BC8 "\t"
 *   insn=0x00000000003C3BCC string=0x00000000003C3BD0 "hR@"
 *   insn=0x00000000003C3BD0 string=0x00000000003C3BD4 "`\n@"
 *   insn=0x00000000003C3BD4 string=0x00000000003C3BD8 ")"
 *   insn=0x00000000003C3BD8 string=0x00000000003C3BDC ""
 *   insn=0x00000000003C3BDC string=0x00000000003C3BE0 "hR"
 *   insn=0x00000000003C3BEC string=0x00000000003C3BF0 "|"
 *   insn=0x00000000003C3BF0 string=0x00000000003C3BF4 ""
 *   insn=0x00000000003C3BF0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003C3BF4 string=0x00000000003C3BF8 ""
 *   insn=0x00000000003C3BF8 string=0x00000000003C3BFC "a"
 *   insn=0x00000000003C3BFC string=0x00000000003C3C00 ""
 *   insn=0x00000000003C3C00 string=0x00000000003C3C04 "`\n"
 *   insn=0x00000000003C3C18 string=0x00000000003C3C1C "ub"
 *   insn=0x00000000003C3C1C string=0x00000000003C3C20 "i"D))}@"
 *   insn=0x00000000003C3C20 string=0x00000000003C3C24 ")}@"
 *   insn=0x00000000003C3C24 string=0x00000000003C3C28 "?"
 *   insn=0x00000000003C3C2C string=0x00000000003C3C30 "h"
 *   insn=0x00000000003C3C2C string=0x00000000003C3C44 "i*@"
 *   insn=0x00000000003C3C30 string=0x00000000003C3C34 "*"
 *   insn=0x00000000003C3C34 string=0x00000000003C3C38 "j""
 *   insn=0x00000000003C3C4C string=0x00000000003C3C60 ""
 *   insn=0x00000000003C3C54 string=0x00000000003C3C58 "2"
 *   insn=0x00000000003C3C58 string=0x00000000003C3C5C "h&@"
 *   insn=0x00000000003C3C58 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000003C3C60 string=0x00000000003C3C64 "h&"
 *   insn=0x00000000003C3C64 string=0x00000000003C3C68 "f"
 *   insn=0x00000000003C3C68 string=0x00000000003C3C6C "h""
 *   insn=0x00000000003C3C68 string=0x00000000001F4A00 "P'"
 *   insn=0x00000000003C3C6C string=0x00000000003C3C70 "i"
 *   insn=0x00000000003C3C70 string=0x00000000003C3C74 "\n"
 *   insn=0x00000000003C3C74 string=0x00000000003C3C78 "j""
 *   insn=0x00000000003C3C78 string=0x00000000003C3C7C " y("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

google::protobuf::internal::StringTypeHandlerBase *__fastcall Caver::QuestText::SaveToProtobufMessage(
        Caver::QuestText *this,
        Caver::Proto::QuestText *a2)
{
  __int64 *v4; // x0
  google::protobuf::internal::StringTypeHandlerBase *result; // x0
  __int64 v6; // x20
  __int64 i; // x22
  int v8; // w8
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 v13; // x9

  v4 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 20) |= 1u;
  if ( v4 == &Caver::Proto::QuestText::_default_quest_name_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v4;
  }
  result = (google::protobuf::internal::StringTypeHandlerBase *)sub_56A6A8(v4);
  v6 = *((_QWORD *)this + 1);
  for ( i = *((_QWORD *)this + 2); i != v6; v6 += 8 )
  {
    v8 = *((_DWORD *)a2 + 9);
    v9 = *((int *)a2 + 8);
    if ( (int)v9 >= v8 )
    {
      if ( v8 == *((_DWORD *)a2 + 10) )
      {
        result = (google::protobuf::internal::StringTypeHandlerBase *)google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                                                                        (Caver::Proto::QuestText *)((char *)a2 + 24),
                                                                        v8 + 1);
        v8 = *((_DWORD *)a2 + 9);
      }
      *((_DWORD *)a2 + 9) = v8 + 1;
      v11 = google::protobuf::internal::StringTypeHandlerBase::New(result);
      v12 = *((int *)a2 + 8);
      v13 = *((_QWORD *)a2 + 3);
      *((_DWORD *)a2 + 8) = v12 + 1;
      *(_QWORD *)(v13 + 8 * v12) = v11;
    }
    else
    {
      v10 = *((_QWORD *)a2 + 3);
      *((_DWORD *)a2 + 8) = v9 + 1;
      v11 = *(_QWORD *)(v10 + 8 * v9);
    }
    result = (google::protobuf::internal::StringTypeHandlerBase *)sub_56A6A8(v11);
  }
  return result;
}

