/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004752D4
 * Mangled: _ZNK5Caver16SceneObjectGroup21SaveToProtobufMessageEPNS_5Proto16SceneObjectGroupE
 * Demangled: Caver::SceneObjectGroup::SaveToProtobufMessage(Caver::Proto::SceneObjectGroup *)
 *
 * Callers: 1
 *   0x0000000000201AC0  Caver::SceneObjectGroup::SaveToProtobufMessage(Caver::Proto::SceneObjectGroup *)
 *
 * Callees: 9
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x0000000000475498  Caver::SceneObjectGroup::FinishLoad(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x00000000004752F0 string=0x00000000004752F4 "hb@"
 *   insn=0x00000000004752F4 string=0x00000000004752F8 "`\n@"
 *   insn=0x00000000004752F8 string=0x00000000004752FC ")A"
 *   insn=0x0000000000475300 string=0x0000000000475304 ""
 *   insn=0x0000000000475304 string=0x0000000000475308 "hb"
 *   insn=0x0000000000475318 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000047531C string=0x0000000000475320 ""
 *   insn=0x0000000000475320 string=0x0000000000475324 "a"
 *   insn=0x0000000000475324 string=0x0000000000475328 ""
 *   insn=0x0000000000475328 string=0x000000000047532C "`\n"
 *   insn=0x0000000000475344 string=0x0000000000475348 "ub"
 *   insn=0x000000000047534C string=0x0000000000475350 "i"D)Jyw"
 *   insn=0x0000000000475350 string=0x0000000000475354 "Jyw"
 *   insn=0x0000000000475354 string=0x0000000000475358 ")}@"
 *   insn=0x0000000000475358 string=0x000000000047535C "?"
 *   insn=0x000000000047535C string=0x0000000000475360 "VA"
 *   insn=0x0000000000475364 string=0x0000000000475368 "h"
 *   insn=0x0000000000475364 string=0x000000000047537C "i*@"
 *   insn=0x0000000000475368 string=0x000000000047536C "*"
 *   insn=0x000000000047536C string=0x0000000000475370 "j""
 *   insn=0x0000000000475384 string=0x0000000000475398 ""
 *   insn=0x000000000047538C string=0x0000000000475390 "d"
 *   insn=0x0000000000475390 string=0x0000000000475394 "h&@"
 *   insn=0x0000000000475390 string=0x00000000001FAD20 "0'"
 *   insn=0x0000000000475398 string=0x000000000047539C "h&"
 *   insn=0x00000000004753A0 string=0x00000000004753A4 "h""
 *   insn=0x00000000004753A0 string=0x00000000001F4A00 "P'"
 *   insn=0x00000000004753A4 string=0x00000000004753A8 "i"
 *   insn=0x00000000004753A8 string=0x00000000004753AC "\n"
 *   insn=0x00000000004753AC string=0x00000000004753B0 "j""
 *   insn=0x00000000004753B0 string=0x00000000004753B4 " y("
 *   insn=0x00000000004753C8 string=0x00000000004753CC ""
 *   insn=0x00000000004753D4 string=0x00000000004753D8 "hb@"
 *   insn=0x00000000004753DC string=0x00000000004753E0 "iB"
 *   insn=0x00000000004753E0 string=0x00000000004753E4 ""
 *   insn=0x00000000004753E4 string=0x00000000004753E8 "hb"
 *   insn=0x00000000004753F0 string=0x00000000004753F4 "hb@"
 *   insn=0x00000000004753F8 string=0x00000000004753FC "iF"
 *   insn=0x00000000004753FC string=0x0000000000475400 ""
 *   insn=0x0000000000475400 string=0x0000000000475404 "hb"
 *   insn=0x000000000047540C string=0x0000000000475410 "hb@"
 *   insn=0x0000000000475414 string=0x0000000000475418 "iJ"
 *   insn=0x0000000000475418 string=0x000000000047541C ""
 *   insn=0x000000000047541C string=0x0000000000475420 "hb"
 *   insn=0x0000000000475424 string=0x0000000000475428 "T"
 *   insn=0x0000000000475428 string=0x000000000047542C "hb@"
 *   insn=0x000000000047542C string=0x0000000000475430 "u.@"
 *   insn=0x0000000000475430 string=0x0000000000475434 ""
 *   insn=0x0000000000475434 string=0x0000000000475438 "hb"
 *   insn=0x0000000000475440 string=0x0000000000475444 "g"
 *   insn=0x000000000047544C string=0x0000000000475450 "u."
 *   insn=0x000000000047544C string=0x00000000001F5000 "P'"
 *   insn=0x000000000047546C string=0x00000000001F8790 "0'"
 *   insn=0x000000000047548C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

google::protobuf::internal::StringTypeHandlerBase *__fastcall Caver::SceneObjectGroup::SaveToProtobufMessage(
        Caver::SceneObjectGroup *this,
        Caver::Proto::SceneObjectGroup *a2)
{
  __int64 *v4; // x0
  google::protobuf::internal::StringTypeHandlerBase *result; // x0
  __int64 v6; // x23
  int v7; // w8
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x8
  __int64 v12; // x9
  int v13; // w8
  int v14; // w8
  int v15; // w8
  Caver::Program *v16; // x20
  Caver::Proto::Program *v17; // x21

  v4 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 24) |= 1u;
  if ( v4 == &Caver::Proto::SceneObjectGroup::_default_identifier_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v4;
  }
  result = (google::protobuf::internal::StringTypeHandlerBase *)sub_56A6A8(v4);
  if ( *((int *)this + 14) >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = *((_DWORD *)a2 + 9);
      v8 = *((int *)a2 + 8);
      if ( (int)v8 >= v7 )
      {
        if ( v7 == *((_DWORD *)a2 + 10) )
        {
          result = (google::protobuf::internal::StringTypeHandlerBase *)google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                                                                          (Caver::Proto::SceneObjectGroup *)((char *)a2 + 24),
                                                                          v7 + 1);
          v7 = *((_DWORD *)a2 + 9);
        }
        *((_DWORD *)a2 + 9) = v7 + 1;
        v10 = google::protobuf::internal::StringTypeHandlerBase::New(result);
        v11 = *((int *)a2 + 8);
        v12 = *((_QWORD *)a2 + 3);
        *((_DWORD *)a2 + 8) = v11 + 1;
        *(_QWORD *)(v12 + 8 * v11) = v10;
      }
      else
      {
        v9 = *((_QWORD *)a2 + 3);
        *((_DWORD *)a2 + 8) = v8 + 1;
        v10 = *(_QWORD *)(v9 + 8 * v8);
      }
      result = (google::protobuf::internal::StringTypeHandlerBase *)sub_56A6A8(v10);
      ++v6;
    }
    while ( v6 < *((int *)this + 14) );
  }
  if ( *((_BYTE *)this + 72) )
  {
    v13 = *((_DWORD *)a2 + 24);
    *((_BYTE *)a2 + 80) = 1;
    *((_DWORD *)a2 + 24) = v13 | 4;
  }
  if ( *((_BYTE *)this + 73) )
  {
    v14 = *((_DWORD *)a2 + 24);
    *((_BYTE *)a2 + 81) = 1;
    *((_DWORD *)a2 + 24) = v14 | 8;
  }
  if ( *((_BYTE *)this + 75) )
  {
    v15 = *((_DWORD *)a2 + 24);
    *((_BYTE *)a2 + 82) = 1;
    *((_DWORD *)a2 + 24) = v15 | 0x10;
  }
  v16 = (Caver::Program *)*((_QWORD *)this + 5);
  if ( v16 )
  {
    v17 = (Caver::Proto::Program *)*((_QWORD *)a2 + 11);
    *((_DWORD *)a2 + 24) |= 0x20u;
    if ( !v17 )
    {
      v17 = (Caver::Proto::Program *)operator new(0x30u);
      Caver::Proto::Program::Program(v17);
      *((_QWORD *)a2 + 11) = v17;
    }
    return (google::protobuf::internal::StringTypeHandlerBase *)Caver::Program::SaveToProtobufMessage(v16, v17);
  }
  return result;
}

