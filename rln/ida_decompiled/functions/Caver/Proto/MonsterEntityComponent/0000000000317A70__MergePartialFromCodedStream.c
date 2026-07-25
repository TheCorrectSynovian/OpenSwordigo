/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000317A70
 * Mangled: _ZN5Caver5Proto22MonsterEntityComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MonsterEntityComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000317E44  Caver::Proto::MonsterEntityComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 122
 *   insn=0x0000000000317A84 string=0x0000000000317A88 "W"
 *   insn=0x0000000000317AA0 string=0x0000000000317AA4 "h"
 *   insn=0x0000000000317AA8 string=0x0000000000317AAC """
 *   insn=0x0000000000317AAC string=0x0000000000317AB0 "\t"
 *   insn=0x0000000000317AB4 string=0x0000000000317AB8 "!"
 *   insn=0x0000000000317AB8 string=0x0000000000317ABC ""
 *   insn=0x0000000000317ABC string=0x0000000000317AC0 "a""
 *   insn=0x0000000000317AC0 string=0x0000000000317AC4 "h"
 *   insn=0x0000000000317AC8 string=0x0000000000317AE4 "(|"
 *   insn=0x0000000000317AD4 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000317AD8 string=0x0000000000317ADC "a""
 *   insn=0x0000000000317AE4 string=0x0000000000317AE8 ""
 *   insn=0x0000000000317AF0 string=0x0000000000317AF4 "{"
 *   insn=0x0000000000317AF0 string=0x0000000000317BCC "("
 *   insn=0x0000000000317AF4 string=0x0000000000317AF8 ""
 *   insn=0x0000000000317AFC string=0x0000000000317B00 "("
 *   insn=0x0000000000317AFC string=0x0000000000317B5C "("
 *   insn=0x0000000000317AFC string=0x0000000000317B8C "("
 *   insn=0x0000000000317AFC string=0x0000000000317BBC "("
 *   insn=0x0000000000317B04 string=0x0000000000317B08 "A"
 *   insn=0x0000000000317B10 string=0x0000000000317B14 ""
 *   insn=0x0000000000317B1C string=0x0000000000317B34 "h"
 *   insn=0x0000000000317B24 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000317B28 string=0x0000000000317B2C "5u"
 *   insn=0x0000000000317B2C string=0x00000000001F5000 "P'"
 *   insn=0x0000000000317B38 string=0x0000000000317B3C "b"
 *   insn=0x0000000000317B3C string=0x0000000000317B40 "\t"
 *   insn=0x0000000000317B40 string=0x0000000000317B44 ")"
 *   insn=0x0000000000317B44 string=0x0000000000317B48 ")"
 *   insn=0x0000000000317B48 string=0x0000000000317B4C ""
 *   insn=0x0000000000317B50 string=0x0000000000317B54 "h"
 *   insn=0x0000000000317B54 string=0x0000000000317B58 "("
 *   insn=0x0000000000317B58 string=0x0000000000317BF8 "h&G)\n"
 *   insn=0x0000000000317B60 string=0x0000000000317B64 "i"
 *   insn=0x0000000000317B64 string=0x0000000000317B68 "?"
 *   insn=0x0000000000317B68 string=0x0000000000317B6C """
 *   insn=0x0000000000317B6C string=0x0000000000317B70 "*"
 *   insn=0x0000000000317B74 string=0x0000000000317B78 "J"
 *   insn=0x0000000000317B78 string=0x0000000000317B7C ")"
 *   insn=0x0000000000317B80 string=0x0000000000317B84 "i"
 *   insn=0x0000000000317B84 string=0x0000000000317B88 "x"
 *   insn=0x0000000000317B90 string=0x0000000000317B94 "j"
 *   insn=0x0000000000317B94 string=0x0000000000317B98 "_"
 *   insn=0x0000000000317B98 string=0x0000000000317B9C "B"
 *   insn=0x0000000000317B9C string=0x0000000000317BA0 "I"
 *   insn=0x0000000000317BA0 string=0x0000000000317BA4 "\t"
 *   insn=0x0000000000317BA4 string=0x0000000000317BA8 ")"
 *   insn=0x0000000000317BA8 string=0x0000000000317BAC "J"
 *   insn=0x0000000000317BB0 string=0x0000000000317BB4 "j"
 *   insn=0x0000000000317BC0 string=0x0000000000317BC4 "a"
 *   insn=0x0000000000317BC4 string=0x0000000000317BC8 "*"
 *   insn=0x0000000000317BD8 string=0x0000000000317BDC "="
 *   insn=0x0000000000317BDC string=0x0000000000317BE0 " "
 *   insn=0x0000000000317BDC string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000317BF0 string=0x0000000000317BF4 "@"
 *   insn=0x0000000000317BF0 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000317BF8 string=0x0000000000317BFC "\n"
 *   insn=0x0000000000317C00 string=0x0000000000317C04 "j:"
 *   insn=0x0000000000317C10 string=0x0000000000317C14 "["
 *   insn=0x0000000000317C20 string=0x0000000000317C24 "?"
 *   insn=0x0000000000317C24 string=0x00000000001F8D20 "0'"
 *   insn=0x0000000000317C28 string=0x0000000000317C2C "h"
 *   insn=0x0000000000317C2C string=0x0000000000317C30 "h"
 *   insn=0x0000000000317C38 string=0x0000000000317C3C "u"
 *   insn=0x0000000000317C3C string=0x0000000000317C40 "h:@"
 *   insn=0x0000000000317C40 string=0x0000000000317C44 ""
 *   insn=0x0000000000317C44 string=0x0000000000317C48 "K"
 *   insn=0x0000000000317C48 string=0x0000000000317C4C "h:"
 *   insn=0x0000000000317C48 string=0x0000000000317C50 "h"
 *   insn=0x0000000000317C54 string=0x0000000000317C58 "b"
 *   insn=0x0000000000317C58 string=0x0000000000317C5C "\t"
 *   insn=0x0000000000317C5C string=0x0000000000317C60 "?I"
 *   insn=0x0000000000317C64 string=0x0000000000317C68 ""
 *   insn=0x0000000000317C68 string=0x0000000000317C6C "h"
 *   insn=0x0000000000317C74 string=0x0000000000317C78 ""
 *   insn=0x0000000000317C80 string=0x0000000000317C98 "h"
 *   insn=0x0000000000317C84 string=0x0000000000317C88 "Vv"
 *   insn=0x0000000000317CA0 string=0x0000000000317CA4 "\t"
 *   insn=0x0000000000317CA8 string=0x0000000000317CAC ")"
 *   insn=0x0000000000317CAC string=0x0000000000317CB0 ""
 *   insn=0x0000000000317CB4 string=0x0000000000317CB8 "h"
 *   insn=0x0000000000317CBC string=0x0000000000317CD0 "h&G)\n"
 *   insn=0x0000000000317CD0 string=0x0000000000317CD4 "\n"
 *   insn=0x0000000000317CD8 string=0x0000000000317CDC "j:"
 *   insn=0x0000000000317CE8 string=0x0000000000317CEC "%"
 *   insn=0x0000000000317CF8 string=0x0000000000317CFC "\t"
 *   insn=0x0000000000317D00 string=0x0000000000317D04 "h"
 *   insn=0x0000000000317D10 string=0x0000000000317D14 "?"
 *   insn=0x0000000000317D14 string=0x0000000000317D18 "h:@"
 *   insn=0x0000000000317D18 string=0x0000000000317D1C ""
 *   insn=0x0000000000317D1C string=0x0000000000317D20 "K"
 *   insn=0x0000000000317D20 string=0x0000000000317D24 "h:"
 *   insn=0x0000000000317D20 string=0x0000000000317D28 "i"
 *   insn=0x0000000000317D28 string=0x0000000000317D2C "?"
 *   insn=0x0000000000317D30 string=0x0000000000317D34 "*"
 *   insn=0x0000000000317D34 string=0x0000000000317D38 "_a"
 *   insn=0x0000000000317D38 string=0x0000000000317D3C "A"
 *   insn=0x0000000000317D3C string=0x0000000000317D40 ")"
 *   insn=0x0000000000317D40 string=0x0000000000317D44 "i"
 *   insn=0x0000000000317D44 string=0x0000000000317D48 "?"
 *   insn=0x0000000000317D48 string=0x0000000000317D4C "#"
 *   insn=0x0000000000317D60 string=0x0000000000317D64 "i"
 *   insn=0x0000000000317D68 string=0x0000000000317D6C "_"
 *   insn=0x0000000000317D74 string=0x0000000000317D78 "j"
 *   insn=0x0000000000317D78 string=0x0000000000317D7C "?"
 *   insn=0x0000000000317D84 string=0x0000000000317D88 "*"
 *   insn=0x0000000000317D88 string=0x0000000000317D8C "_"
 *   insn=0x0000000000317D90 string=0x0000000000317D94 "*"
 *   insn=0x0000000000317D94 string=0x0000000000317D98 "j"
 *   insn=0x0000000000317D98 string=0x0000000000317D9C "_"
 *   insn=0x0000000000317DAC string=0x0000000000317DB0 "`"
 *   insn=0x0000000000317DB4 string=0x0000000000317DB8 "j"
 *   insn=0x0000000000317DBC string=0x0000000000317DC0 "?"
 *   insn=0x0000000000317DC8 string=0x0000000000317DCC "i"
 *   insn=0x0000000000317DCC string=0x0000000000317DD0 "_"
 *   insn=0x0000000000317DD4 string=0x0000000000317DD8 "a"
 *   insn=0x0000000000317DD8 string=0x0000000000317DDC "h.@"
 *   insn=0x0000000000317DDC string=0x0000000000317DE0 "("
 *   insn=0x0000000000317DE8 string=0x0000000000317DEC "`"
 *   insn=0x0000000000317E0C string=0x0000000000317E28 "*y"
 *   insn=0x0000000000317E28 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000317E38 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterEntityComponent::MergePartialFromCodedStream(
        Caver::Proto::MonsterEntityComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  Caver::Proto::Program *v9; // x21
  char *v10; // x8
  unsigned __int64 v11; // x8
  char *v12; // x9
  unsigned int v13; // w10
  _BYTE *v14; // x9
  char *v15; // x10
  unsigned int v16; // w9
  unsigned __int8 *v17; // x10
  int v18; // w8
  int v19; // w9
  int v20; // w22
  int v21; // w8
  bool v22; // vf
  int v23; // w8
  _BYTE *v24; // x8
  Caver::Proto::Program *v25; // x21
  char *v26; // x8
  int v27; // w8
  int v28; // w9
  int v29; // w22
  int v30; // w8
  int v31; // w8
  _BYTE *v32; // x9
  int v33; // w11
  int v34; // w11
  __int64 result; // x0
  unsigned int v36; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v37; // [xsp+8h] [xbp-38h]

  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
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
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_25;
        v9 = (Caver::Proto::Program *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 9) |= 2u;
        if ( !v9 )
        {
          v9 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v9);
          *((_QWORD *)this + 3) = v9;
        }
        v10 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v10 >= *((_QWORD *)a2 + 2) || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
        }
        else
        {
          v36 = (unsigned __int8)*v10;
          *((_QWORD *)a2 + 1) = v10 + 1;
        }
        v18 = *((_DWORD *)a2 + 14);
        v19 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v18 + 1;
        if ( v18 >= v19 )
          return 0;
        v20 = google::protobuf::io::CodedInputStream::PushLimit(a2, v36);
        if ( (Caver::Proto::Program::MergePartialFromCodedStream(v9, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v20);
        v21 = *((_DWORD *)a2 + 14);
        v22 = __OFSUB__(v21, 1);
        v23 = v21 - 1;
        if ( v23 < 0 == v22 )
          *((_DWORD *)a2 + 14) = v23;
        v24 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v24 >= *((_QWORD *)a2 + 2) || *v24 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v24 + 1;
        goto LABEL_37;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_25;
LABEL_37:
        v25 = (Caver::Proto::Program *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 9) |= 1u;
        if ( !v25 )
        {
          v25 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v25);
          *((_QWORD *)this + 2) = v25;
        }
        v26 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v26 >= *((_QWORD *)a2 + 2) || *v26 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
        }
        else
        {
          v36 = (unsigned __int8)*v26;
          *((_QWORD *)a2 + 1) = v26 + 1;
        }
        v27 = *((_DWORD *)a2 + 14);
        v28 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v27 + 1;
        if ( v27 >= v28 )
          return 0;
        v29 = google::protobuf::io::CodedInputStream::PushLimit(a2, v36);
        if ( (Caver::Proto::Program::MergePartialFromCodedStream(v25, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v29);
        v30 = *((_DWORD *)a2 + 14);
        v22 = __OFSUB__(v30, 1);
        v31 = v30 - 1;
        if ( v31 < 0 == v22 )
          *((_DWORD *)a2 + 14) = v31;
        v32 = (_BYTE *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v32 >= v11 || *v32 != 24 )
          continue;
        v12 = v32 + 1;
        *((_QWORD *)a2 + 1) = v12;
        if ( (unsigned __int64)v12 >= v11 )
          goto LABEL_51;
LABEL_16:
        if ( *v12 < 0 )
        {
LABEL_51:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
          v13 = v36;
          v14 = (_BYTE *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v13 = (unsigned __int8)*v12;
          v14 = v12 + 1;
          v36 = v13;
          *((_QWORD *)a2 + 1) = v14;
        }
        v33 = *((_DWORD *)this + 9);
        *((_BYTE *)this + 32) = v13 != 0;
        *((_DWORD *)this + 9) = v33 | 4;
        if ( (unsigned __int64)v14 >= v11 || *v14 != 32 )
          continue;
        v15 = v14 + 1;
        *((_QWORD *)a2 + 1) = v14 + 1;
        if ( (unsigned __int64)(v14 + 1) >= v11 )
          goto LABEL_56;
LABEL_20:
        if ( (*v15 & 0x80000000) == 0 )
        {
          v16 = (unsigned __int8)*v15;
          v17 = (unsigned __int8 *)(v15 + 1);
          v36 = v16;
          *((_QWORD *)a2 + 1) = v17;
          goto LABEL_58;
        }
LABEL_56:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) != 0 )
        {
          v16 = v36;
          v17 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
LABEL_58:
          v34 = *((_DWORD *)this + 9);
          *((_BYTE *)this + 33) = v16 != 0;
          *((_DWORD *)this + 9) = v34 | 8;
          if ( v17 == (unsigned __int8 *)v11 && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      case 3u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v12 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v12 < v11 )
          goto LABEL_16;
        goto LABEL_51;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v15 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v15 < v11 )
          goto LABEL_20;
        goto LABEL_56;
      default:
        v8 = v6 & 7;
LABEL_25:
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

