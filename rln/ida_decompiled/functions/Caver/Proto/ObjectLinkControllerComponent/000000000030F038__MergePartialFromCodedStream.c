/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030F038
 * Mangled: _ZN5Caver5Proto29ObjectLinkControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000030F4F0  Caver::Proto::ObjectLinkControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 131
 *   insn=0x000000000030F054 string=0x000000000030F058 "W"
 *   insn=0x000000000030F064 string=0x000000000030F068 "9F"
 *   insn=0x000000000030F068 string=0x000000000030F06C "Z"
 *   insn=0x000000000030F088 string=0x000000000030F08C "[c"
 *   insn=0x000000000030F08C string=0x000000000030F090 "h"
 *   insn=0x000000000030F094 string=0x000000000030F098 """
 *   insn=0x000000000030F098 string=0x000000000030F09C "\t"
 *   insn=0x000000000030F0A0 string=0x000000000030F0A4 "!"
 *   insn=0x000000000030F0A4 string=0x000000000030F0A8 ""
 *   insn=0x000000000030F0A8 string=0x000000000030F0AC "a""
 *   insn=0x000000000030F0AC string=0x000000000030F0B0 "h"
 *   insn=0x000000000030F0B4 string=0x000000000030F0D0 "(|"
 *   insn=0x000000000030F0BC string=0x000000000030F0C0 "`"
 *   insn=0x000000000030F0C0 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000030F0C4 string=0x000000000030F0C8 "a""
 *   insn=0x000000000030F0D0 string=0x000000000030F0D4 ""
 *   insn=0x000000000030F0D8 string=0x000000000030F0DC ""
 *   insn=0x000000000030F0DC string=0x000000000030F0E0 "{"
 *   insn=0x000000000030F0DC string=0x000000000030F23C "("
 *   insn=0x000000000030F0E0 string=0x000000000030F0E4 ""
 *   insn=0x000000000030F0E8 string=0x000000000030F0EC "("
 *   insn=0x000000000030F0E8 string=0x000000000030F154 "("
 *   insn=0x000000000030F0E8 string=0x000000000030F164 "("
 *   insn=0x000000000030F0E8 string=0x000000000030F174 "("
 *   insn=0x000000000030F0E8 string=0x000000000030F184 "("
 *   insn=0x000000000030F0F0 string=0x000000000030F0F4 "a\n"
 *   insn=0x000000000030F0FC string=0x000000000030F100 ""
 *   insn=0x000000000030F100 string=0x000000000030F104 "?"
 *   insn=0x000000000030F110 string=0x000000000030F114 "3"
 *   insn=0x000000000030F114 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030F118 string=0x000000000030F11C ";"
 *   insn=0x000000000030F128 string=0x000000000030F12C "@"
 *   insn=0x000000000030F128 string=0x00000000001F97D0 "0'"
 *   insn=0x000000000030F12C string=0x000000000030F130 "h"
 *   insn=0x000000000030F138 string=0x000000000030F13C "\t"
 *   insn=0x000000000030F13C string=0x000000000030F140 "?I"
 *   insn=0x000000000030F140 string=0x000000000030F144 "a"
 *   insn=0x000000000030F144 string=0x000000000030F148 ""
 *   insn=0x000000000030F148 string=0x000000000030F14C "h"
 *   insn=0x000000000030F158 string=0x000000000030F15C "!"
 *   insn=0x000000000030F16C string=0x000000000030F170 "4"
 *   insn=0x000000000030F178 string=0x000000000030F17C "!"
 *   insn=0x000000000030F17C string=0x000000000030F180 "X"
 *   insn=0x000000000030F194 string=0x000000000030F198 ""
 *   insn=0x000000000030F198 string=0x000000000030F19C "?"
 *   insn=0x000000000030F1A8 string=0x000000000030F1AC ""
 *   insn=0x000000000030F1B0 string=0x000000000030F1B4 "Hc"
 *   insn=0x000000000030F1B4 string=0x000000000030F1B8 "("
 *   insn=0x000000000030F1C4 string=0x000000000030F1C8 "`"
 *   insn=0x000000000030F1C8 string=0x000000000030F1CC "h"
 *   insn=0x000000000030F1D4 string=0x000000000030F1D8 "\t"
 *   insn=0x000000000030F1D8 string=0x000000000030F1DC "?i"
 *   insn=0x000000000030F1E0 string=0x000000000030F1E4 ""
 *   insn=0x000000000030F1E4 string=0x000000000030F1E8 "h"
 *   insn=0x000000000030F1F0 string=0x000000000030F1F4 ""
 *   insn=0x000000000030F1FC string=0x000000000030F214 "h"
 *   insn=0x000000000030F208 string=0x000000000030F20C "Q"
 *   insn=0x000000000030F20C string=0x00000000001FAF50 "0'"
 *   insn=0x000000000030F21C string=0x000000000030F220 "\t"
 *   insn=0x000000000030F224 string=0x000000000030F228 ")"
 *   insn=0x000000000030F228 string=0x000000000030F22C ""
 *   insn=0x000000000030F230 string=0x000000000030F234 "h"
 *   insn=0x000000000030F238 string=0x000000000030F268 "h&G)\n"
 *   insn=0x000000000030F24C string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000030F25C string=0x000000000030F260 "|"
 *   insn=0x000000000030F260 string=0x00000000001F9050 "0'"
 *   insn=0x000000000030F268 string=0x000000000030F26C "\n"
 *   insn=0x000000000030F270 string=0x000000000030F274 "j:"
 *   insn=0x000000000030F294 string=0x00000000001F6150 "0'"
 *   insn=0x000000000030F298 string=0x000000000030F29C "h"
 *   insn=0x000000000030F2AC string=0x000000000030F2B0 "h:@"
 *   insn=0x000000000030F2B0 string=0x000000000030F2B4 ""
 *   insn=0x000000000030F2B4 string=0x000000000030F2B8 "K"
 *   insn=0x000000000030F2B8 string=0x000000000030F2BC "h:"
 *   insn=0x000000000030F2B8 string=0x000000000030F2C0 "h"
 *   insn=0x000000000030F2C4 string=0x000000000030F2C8 "B"
 *   insn=0x000000000030F2C8 string=0x000000000030F2CC "\t"
 *   insn=0x000000000030F2CC string=0x000000000030F2D0 "?"
 *   insn=0x000000000030F2D4 string=0x000000000030F2D8 ""
 *   insn=0x000000000030F2D8 string=0x000000000030F2DC "h"
 *   insn=0x000000000030F2E4 string=0x000000000030F2E8 ""
 *   insn=0x000000000030F2F0 string=0x000000000030F308 "h"
 *   insn=0x000000000030F310 string=0x000000000030F314 "\t"
 *   insn=0x000000000030F318 string=0x000000000030F31C ")"
 *   insn=0x000000000030F31C string=0x000000000030F320 ""
 *   insn=0x000000000030F324 string=0x000000000030F328 "h"
 *   insn=0x000000000030F32C string=0x000000000030F340 "h&G)\n"
 *   insn=0x000000000030F334 string=0x000000000030F338 "F"
 *   insn=0x000000000030F340 string=0x000000000030F344 "\n"
 *   insn=0x000000000030F348 string=0x000000000030F34C "j:"
 *   insn=0x000000000030F34C string=0x000000000030F350 "*\n"
 *   insn=0x000000000030F368 string=0x000000000030F36C "y"
 *   insn=0x000000000030F36C string=0x000000000030F370 " \t"
 *   insn=0x000000000030F370 string=0x000000000030F374 "h"
 *   insn=0x000000000030F384 string=0x000000000030F388 "h:@"
 *   insn=0x000000000030F388 string=0x000000000030F38C ""
 *   insn=0x000000000030F38C string=0x000000000030F390 "K"
 *   insn=0x000000000030F390 string=0x000000000030F394 "h:"
 *   insn=0x000000000030F390 string=0x000000000030F398 "h"
 *   insn=0x000000000030F3A0 string=0x000000000030F3A4 "\t"
 *   insn=0x000000000030F3A4 string=0x000000000030F3A8 "?"
 *   insn=0x000000000030F3A8 string=0x000000000030F3AC "!"
 *   insn=0x000000000030F3AC string=0x000000000030F3B0 ""
 *   insn=0x000000000030F3B0 string=0x000000000030F3B4 "h"
 *   insn=0x000000000030F3BC string=0x000000000030F3C0 ""
 *   insn=0x000000000030F3C8 string=0x000000000030F3E0 "h"
 *   insn=0x000000000030F3E8 string=0x000000000030F3EC "\t"
 *   insn=0x000000000030F3F0 string=0x000000000030F3F4 ")"
 *   insn=0x000000000030F3F4 string=0x000000000030F3F8 ""
 *   insn=0x000000000030F3FC string=0x000000000030F400 "h"
 *   insn=0x000000000030F404 string=0x000000000030F418 "h&G)\n"
 *   insn=0x000000000030F418 string=0x000000000030F41C "\n"
 *   insn=0x000000000030F420 string=0x000000000030F424 "j:"
 *   insn=0x000000000030F424 string=0x000000000030F428 "j"
 *   insn=0x000000000030F430 string=0x000000000030F434 "S"
 *   insn=0x000000000030F440 string=0x000000000030F444 "C"
 *   insn=0x000000000030F444 string=0x000000000030F448 "`"
 *   insn=0x000000000030F448 string=0x000000000030F44C "h"
 *   insn=0x000000000030F44C string=0x000000000030F450 "("
 *   insn=0x000000000030F458 string=0x000000000030F45C "m"
 *   insn=0x000000000030F45C string=0x000000000030F460 "h:@"
 *   insn=0x000000000030F460 string=0x000000000030F464 ""
 *   insn=0x000000000030F464 string=0x000000000030F468 "K"
 *   insn=0x000000000030F468 string=0x000000000030F46C "h:"
 *   insn=0x000000000030F468 string=0x000000000030F470 "h"
 *   insn=0x000000000030F478 string=0x000000000030F47C "h.@"
 *   insn=0x000000000030F488 string=0x000000000030F48C "`"
 *   insn=0x000000000030F4A8 string=0x000000000030F4AC "!"
 *   insn=0x000000000030F4D0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030F4E0 string=0x000000000030F4E4 "s"
 *   insn=0x000000000030F4E4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLinkControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::ObjectLinkControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  __int64 *v9; // x1
  _QWORD *v10; // x0
  _BYTE *v11; // x8
  __int64 *v12; // x1
  _QWORD *v13; // x0
  _BYTE *v14; // x8
  Caver::Proto::Vector3 *v15; // x21
  char *v16; // x8
  int v17; // w8
  int v18; // w9
  int v19; // w22
  int v20; // w8
  bool v21; // vf
  int v22; // w8
  _BYTE *v23; // x8
  Caver::Proto::Vector3 *v24; // x21
  char *v25; // x8
  int v26; // w8
  int v27; // w9
  int v28; // w22
  int v29; // w8
  int v30; // w8
  _BYTE *v31; // x8
  Caver::Proto::Vector3 *v32; // x21
  char *v33; // x8
  int v34; // w8
  int v35; // w9
  int v36; // w22
  int v37; // w8
  int v38; // w8
  __int64 result; // x0
  unsigned int v40; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v41; // [xsp+8h] [xbp-58h]

  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    v5 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v5 < *((_QWORD *)a2 + 2) && (*v5 & 0x80000000) == 0 )
    {
      v6 = (unsigned __int8)*v5;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v5 + 1;
      if ( !(_DWORD)v6 )
        return 1;
      goto LABEL_7;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v6 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_7:
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_34;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 14) |= 1u;
        if ( v9 == &Caver::Proto::ObjectLinkControllerComponent::_default_target_object_identifier_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v10;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v11 + 1;
        goto LABEL_22;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_34;
LABEL_22:
        v12 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 14) |= 2u;
        if ( v12 == &Caver::Proto::ObjectLinkControllerComponent::_default_target_bone_identifier_ )
        {
          v13 = (_QWORD *)operator new(8u);
          *v13 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v13;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v14 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_28:
        v15 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 14) |= 4u;
        if ( !v15 )
        {
          v15 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v15);
          *((_QWORD *)this + 4) = v15;
        }
        v16 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 2) || *v16 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
            return 0;
        }
        else
        {
          v40 = (unsigned __int8)*v16;
          *((_QWORD *)a2 + 1) = v16 + 1;
        }
        v17 = *((_DWORD *)a2 + 14);
        v18 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v17 + 1;
        if ( v17 >= v18 )
          return 0;
        v19 = google::protobuf::io::CodedInputStream::PushLimit(a2, v40);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v15, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v19);
        v20 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v20, 1);
        v22 = v20 - 1;
        if ( v22 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v22;
        v23 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) || *v23 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v23 + 1;
LABEL_46:
        v24 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 6);
        *((_DWORD *)this + 14) |= 0x10u;
        if ( !v24 )
        {
          v24 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v24);
          *((_QWORD *)this + 6) = v24;
        }
        v25 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v25 >= *((_QWORD *)a2 + 2) || *v25 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
            return 0;
        }
        else
        {
          v40 = (unsigned __int8)*v25;
          *((_QWORD *)a2 + 1) = v25 + 1;
        }
        v26 = *((_DWORD *)a2 + 14);
        v27 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v26 + 1;
        if ( v26 >= v27 )
          return 0;
        v28 = google::protobuf::io::CodedInputStream::PushLimit(a2, v40);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v24, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v28);
        v29 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v29, 1);
        v30 = v29 - 1;
        if ( v30 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v30;
        v31 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v31 >= *((_QWORD *)a2 + 2) || *v31 != 42 )
          continue;
        *((_QWORD *)a2 + 1) = v31 + 1;
LABEL_60:
        v32 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 5);
        *((_DWORD *)this + 14) |= 8u;
        if ( !v32 )
        {
          v32 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v32);
          *((_QWORD *)this + 5) = v32;
        }
        v33 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v33 >= *((_QWORD *)a2 + 2) || *v33 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
            return 0;
        }
        else
        {
          v40 = (unsigned __int8)*v33;
          *((_QWORD *)a2 + 1) = v33 + 1;
        }
        v34 = *((_DWORD *)a2 + 14);
        v35 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v34 + 1;
        if ( v34 >= v35 )
          return 0;
        v36 = google::protobuf::io::CodedInputStream::PushLimit(a2, v40);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v32, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v36);
        v37 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v37, 1);
        v38 = v37 - 1;
        if ( v38 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v38;
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 3u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_34;
        goto LABEL_28;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_46;
        goto LABEL_34;
      case 5u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_60;
        goto LABEL_34;
      default:
        v8 = v6 & 7;
LABEL_34:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

