/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DB1B0
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldISsE9MergeFromERKS2_
 * Demangled: google::protobuf::RepeatedPtrField<std::string>::MergeFrom(google::protobuf::RepeatedPtrField<std::string> const&)
 *
 * Callers: 1
 *   0x00000000001FB3D0  google::protobuf::RepeatedPtrField<std::string>::MergeFrom(google::protobuf::RepeatedPtrField<std::string> const&)
 *
 * Callees: 3
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 16
 *   insn=0x00000000002DB1C8 string=0x00000000002DB1CC "i\n@"
 *   insn=0x00000000002DB1CC string=0x00000000002DB1D0 "!"
 *   insn=0x00000000002DB1D4 string=0x00000000002DB1D8 "h\n@"
 *   insn=0x00000000002DB1D4 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002DB1DC string=0x00000000002DB1E0 "K"
 *   insn=0x00000000002DB1E4 string=0x00000000002DB1E8 "j"
 *   insn=0x00000000002DB1EC string=0x00000000002DB1F0 "Uyv"
 *   insn=0x00000000002DB1F0 string=0x00000000002DB1F4 ")}@"
 *   insn=0x00000000002DB1F4 string=0x00000000002DB1F8 "?"
 *   insn=0x00000000002DB200 string=0x00000000002DB204 "*"
 *   insn=0x00000000002DB21C string=0x00000000002DB230 ""
 *   insn=0x00000000002DB238 string=0x00000000001F4A00 "P'"
 *   insn=0x00000000002DB240 string=0x00000000002DB244 "\n"
 *   insn=0x00000000002DB248 string=0x00000000002DB24C " y("
 *   insn=0x00000000002DB254 string=0x00000000002DB258 "h\n"
 *   insn=0x00000000002DB260 string=0x00000000002DB264 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

google::protobuf::internal::StringTypeHandlerBase *__fastcall google::protobuf::RepeatedPtrField<std::string>::MergeFrom(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        __int64 a2)
{
  google::protobuf::internal::StringTypeHandlerBase *result; // x0
  __int64 v5; // x22
  int v6; // w8
  __int64 v7; // x9
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x9

  result = (google::protobuf::internal::StringTypeHandlerBase *)google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                                                                  a1,
                                                                  *(_DWORD *)(a2 + 8) + *((_DWORD *)a1 + 2));
  if ( *(int *)(a2 + 8) >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = *((_DWORD *)a1 + 3);
      v7 = *((int *)a1 + 2);
      if ( (int)v7 >= v6 )
      {
        if ( v6 == *((_DWORD *)a1 + 4) )
        {
          result = (google::protobuf::internal::StringTypeHandlerBase *)google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                                                                          a1,
                                                                          v6 + 1);
          v6 = *((_DWORD *)a1 + 3);
        }
        *((_DWORD *)a1 + 3) = v6 + 1;
        v9 = google::protobuf::internal::StringTypeHandlerBase::New(result);
        v10 = *((int *)a1 + 2);
        v11 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v10 + 1;
        *(_QWORD *)(v11 + 8 * v10) = v9;
      }
      else
      {
        v8 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 2) = v7 + 1;
        v9 = *(_QWORD *)(v8 + 8 * v7);
      }
      result = (google::protobuf::internal::StringTypeHandlerBase *)sub_56A6A8(v9);
      ++v5;
    }
    while ( v5 < *(int *)(a2 + 8) );
  }
  return result;
}

