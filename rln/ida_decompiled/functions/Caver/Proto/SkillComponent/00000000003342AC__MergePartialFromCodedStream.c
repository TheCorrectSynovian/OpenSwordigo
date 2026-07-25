/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003342AC
 * Mangled: _ZN5Caver5Proto14SkillComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SkillComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000334580  Caver::Proto::SkillComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 81
 *   insn=0x00000000003342C4 string=0x00000000003342C8 "W"
 *   insn=0x00000000003342D8 string=0x00000000003342DC ")"
 *   insn=0x00000000003342E8 string=0x00000000003342EC "9a"
 *   insn=0x00000000003342EC string=0x00000000003342F0 "h"
 *   insn=0x00000000003342F4 string=0x00000000003342F8 """
 *   insn=0x00000000003342F8 string=0x00000000003342FC "\t"
 *   insn=0x0000000000334300 string=0x0000000000334304 "!"
 *   insn=0x0000000000334304 string=0x0000000000334308 ""
 *   insn=0x0000000000334308 string=0x000000000033430C "a""
 *   insn=0x000000000033430C string=0x0000000000334310 "h"
 *   insn=0x0000000000334314 string=0x0000000000334330 "(|"
 *   insn=0x0000000000334320 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000334324 string=0x0000000000334328 "a""
 *   insn=0x0000000000334328 string=0x000000000033432C "!"
 *   insn=0x0000000000334338 string=0x0000000000334370 "("
 *   insn=0x0000000000334340 string=0x000000000033435C "("
 *   insn=0x0000000000334348 string=0x000000000033434C "("
 *   insn=0x0000000000334348 string=0x00000000003343A0 "("
 *   insn=0x0000000000334354 string=0x0000000000334358 "_"
 *   insn=0x0000000000334368 string=0x000000000033436C "%"
 *   insn=0x0000000000334374 string=0x0000000000334378 "i"
 *   insn=0x0000000000334378 string=0x000000000033437C "?"
 *   insn=0x0000000000334380 string=0x0000000000334384 "*"
 *   insn=0x0000000000334388 string=0x000000000033438C "J"
 *   insn=0x000000000033438C string=0x0000000000334390 ")"
 *   insn=0x0000000000334394 string=0x0000000000334398 "i"
 *   insn=0x00000000003343A4 string=0x00000000003343A8 "@"
 *   insn=0x00000000003343AC string=0x00000000003343B0 "H%"
 *   insn=0x00000000003343B0 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003343B4 string=0x00000000003343B8 "`"
 *   insn=0x00000000003343C0 string=0x00000000003343C4 "#"
 *   insn=0x00000000003343C4 string=0x00000000001F9050 "0'"
 *   insn=0x00000000003343CC string=0x00000000003343D0 "i"
 *   insn=0x00000000003343D8 string=0x00000000003343DC "?"
 *   insn=0x00000000003343DC string=0x00000000003343E0 "j"
 *   insn=0x00000000003343E4 string=0x00000000003343E8 "B"
 *   insn=0x00000000003343E8 string=0x00000000003343EC "("
 *   insn=0x00000000003343F4 string=0x00000000003343F8 "("
 *   insn=0x00000000003343F8 string=0x00000000003343FC "h"
 *   insn=0x0000000000334400 string=0x0000000000334404 "H"
 *   insn=0x000000000033440C string=0x0000000000334424 "h"
 *   insn=0x0000000000334410 string=0x0000000000334414 "s"
 *   insn=0x0000000000334414 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000334418 string=0x000000000033441C "-"
 *   insn=0x000000000033441C string=0x00000000001F7CD0 "0'"
 *   insn=0x000000000033442C string=0x0000000000334430 "\t"
 *   insn=0x0000000000334434 string=0x0000000000334438 ")"
 *   insn=0x0000000000334438 string=0x000000000033443C ""
 *   insn=0x0000000000334440 string=0x0000000000334444 "h"
 *   insn=0x0000000000334448 string=0x000000000033445C "h&G)\n"
 *   insn=0x000000000033445C string=0x0000000000334460 "\n"
 *   insn=0x0000000000334464 string=0x0000000000334468 "j:"
 *   insn=0x0000000000334468 string=0x000000000033446C "j"
 *   insn=0x0000000000334474 string=0x0000000000334478 "B9"
 *   insn=0x0000000000334488 string=0x000000000033448C "`"
 *   insn=0x0000000000334488 string=0x00000000001F5710 "P'"
 *   insn=0x000000000033448C string=0x0000000000334490 "h"
 *   insn=0x0000000000334490 string=0x0000000000334494 "("
 *   insn=0x000000000033449C string=0x00000000003344A0 "\:"
 *   insn=0x00000000003344A0 string=0x00000000003344A4 "h:@"
 *   insn=0x00000000003344A4 string=0x00000000003344A8 ""
 *   insn=0x00000000003344A8 string=0x00000000003344AC "K"
 *   insn=0x00000000003344AC string=0x00000000003344B0 "h:"
 *   insn=0x00000000003344AC string=0x00000000003344B4 "h"
 *   insn=0x00000000003344BC string=0x00000000003344C0 "\t"
 *   insn=0x00000000003344C0 string=0x00000000003344C4 "?i"
 *   insn=0x00000000003344C4 string=0x00000000003344C8 "A"
 *   insn=0x00000000003344C8 string=0x00000000003344CC ""
 *   insn=0x00000000003344CC string=0x00000000003344D0 "h"
 *   insn=0x00000000003344D8 string=0x00000000003344DC ""
 *   insn=0x00000000003344DC string=0x00000000003344E0 "?"
 *   insn=0x00000000003344EC string=0x00000000003344F0 "<"
 *   insn=0x00000000003344F4 string=0x00000000003344F8 "9"
 *   insn=0x0000000000334504 string=0x00000000001F97D0 "0'"
 *   insn=0x0000000000334508 string=0x000000000033450C "h"
 *   insn=0x0000000000334514 string=0x0000000000334518 "h.@"
 *   insn=0x0000000000334524 string=0x0000000000334528 "`"
 *   insn=0x0000000000334548 string=0x0000000000334568 "Z"
 *   insn=0x0000000000334568 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000334570 string=0x0000000000334574 "O"
 *   insn=0x0000000000334574 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkillComponent::MergePartialFromCodedStream(
        Caver::Proto::SkillComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  int v10; // w10
  unsigned __int64 v11; // x8
  char *v12; // x9
  unsigned int v13; // w10
  _BYTE *v14; // x9
  int v15; // w11
  Caver::Proto::Vector2 *v16; // x21
  char *v17; // x8
  int v18; // w8
  int v19; // w9
  int v20; // w22
  int v21; // w8
  bool v22; // vf
  int v23; // w8
  _BYTE *v24; // x8
  __int64 *v25; // x1
  _QWORD *v26; // x0
  __int64 result; // x0
  unsigned int v28; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v29; // [xsp+8h] [xbp-48h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v5 >= *((_QWORD *)a2 + 2) || *v5 < 0 )
        {
          TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
          v6 = TagFallback;
          *((_DWORD *)a2 + 8) = TagFallback;
          if ( !TagFallback )
            return 1;
        }
        else
        {
          v6 = (unsigned __int8)*v5;
          *((_DWORD *)a2 + 8) = v6;
          *((_QWORD *)a2 + 1) = v5 + 1;
          if ( !(_DWORD)v6 )
            return 1;
        }
        v8 = (unsigned int)v6 >> 3;
        if ( (unsigned int)v6 >> 3 != 1 )
          break;
        v9 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_19;
        v12 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v12 >= v11 || *v12 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v28) & 1) == 0 )
            return 0;
          v13 = v28;
          v14 = (_BYTE *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v13 = (unsigned __int8)*v12;
          v14 = v12 + 1;
          v28 = v13;
          *((_QWORD *)a2 + 1) = v14;
        }
        v15 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 3) = v13;
        v10 = v15 | 1;
        *((_DWORD *)this + 8) = v15 | 1;
        if ( (unsigned __int64)v14 < v11 && *v14 == 18 )
        {
          *((_QWORD *)a2 + 1) = v14 + 1;
          goto LABEL_27;
        }
      }
      if ( v8 == 2 )
        break;
      if ( v8 != 3 )
      {
        v9 = v6 & 7;
        goto LABEL_19;
      }
      v9 = v6 & 7;
      if ( v9 == 2 )
      {
LABEL_41:
        v25 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 8) |= 2u;
        if ( v25 == &Caver::Proto::SkillComponent::_default_cast_object_template_name_ )
        {
          v26 = (_QWORD *)operator new(8u);
          *v26 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v26;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
      }
      else
      {
LABEL_19:
        if ( v9 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
      }
    }
    v9 = v6 & 7;
    if ( v9 != 2 )
      goto LABEL_19;
    v10 = *((_DWORD *)this + 8);
LABEL_27:
    v16 = (Caver::Proto::Vector2 *)*((_QWORD *)this + 3);
    *((_DWORD *)this + 8) = v10 | 4;
    if ( !v16 )
    {
      v16 = (Caver::Proto::Vector2 *)operator new(0x18u);
      Caver::Proto::Vector2::Vector2(v16);
      *((_QWORD *)this + 3) = v16;
    }
    v17 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v17 >= *((_QWORD *)a2 + 2) || *v17 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v28) & 1) == 0 )
        return 0;
    }
    else
    {
      v28 = (unsigned __int8)*v17;
      *((_QWORD *)a2 + 1) = v17 + 1;
    }
    v18 = *((_DWORD *)a2 + 14);
    v19 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v18 + 1;
    if ( v18 >= v19 )
      return 0;
    v20 = google::protobuf::io::CodedInputStream::PushLimit(a2, v28);
    if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v16, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
      return 0;
    google::protobuf::io::CodedInputStream::PopLimit(a2, v20);
    v21 = *((_DWORD *)a2 + 14);
    v22 = __OFSUB__(v21, 1);
    v23 = v21 - 1;
    if ( v23 < 0 == v22 )
      *((_DWORD *)a2 + 14) = v23;
    v24 = (_BYTE *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v24 < *((_QWORD *)a2 + 2) && *v24 == 26 )
    {
      *((_QWORD *)a2 + 1) = v24 + 1;
      goto LABEL_41;
    }
  }
}

