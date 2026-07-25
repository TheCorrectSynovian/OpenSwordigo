/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000319AB0
 * Mangled: _ZN5Caver5Proto25EntityControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::EntityControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 139
 *   insn=0x0000000000319AC0 string=0x0000000000319AC4 "U"
 *   insn=0x0000000000319ADC string=0x0000000000319AE0 "h"
 *   insn=0x0000000000319AE4 string=0x0000000000319AE8 """
 *   insn=0x0000000000319AE8 string=0x0000000000319AEC "\t"
 *   insn=0x0000000000319AF0 string=0x0000000000319AF4 "!"
 *   insn=0x0000000000319AF4 string=0x0000000000319AF8 ""
 *   insn=0x0000000000319AF8 string=0x0000000000319AFC "a""
 *   insn=0x0000000000319AFC string=0x0000000000319B00 "h"
 *   insn=0x0000000000319B04 string=0x0000000000319B20 "(|"
 *   insn=0x0000000000319B10 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000319B14 string=0x0000000000319B18 "a""
 *   insn=0x0000000000319B18 string=0x0000000000319B1C "A"
 *   insn=0x0000000000319B20 string=0x0000000000319B24 ""
 *   insn=0x0000000000319B2C string=0x0000000000319C5C "("
 *   insn=0x0000000000319B30 string=0x0000000000319B34 ""
 *   insn=0x0000000000319B38 string=0x0000000000319B3C "("
 *   insn=0x0000000000319B38 string=0x0000000000319B6C "("
 *   insn=0x0000000000319B38 string=0x0000000000319B7C "("
 *   insn=0x0000000000319B38 string=0x0000000000319BAC "("
 *   insn=0x0000000000319B38 string=0x0000000000319BDC "("
 *   insn=0x0000000000319B38 string=0x0000000000319C0C "("
 *   insn=0x0000000000319B38 string=0x0000000000319C3C "("
 *   insn=0x0000000000319B38 string=0x0000000000319C4C "("
 *   insn=0x0000000000319B40 string=0x0000000000319B44 "i"
 *   insn=0x0000000000319B44 string=0x0000000000319B48 "?"
 *   insn=0x0000000000319B48 string=0x0000000000319B4C "b\t"
 *   insn=0x0000000000319B4C string=0x0000000000319B50 "*"
 *   insn=0x0000000000319B50 string=0x0000000000319B54 "*\t"
 *   insn=0x0000000000319B54 string=0x0000000000319B58 "J"
 *   insn=0x0000000000319B58 string=0x0000000000319B5C ")"
 *   insn=0x0000000000319B60 string=0x0000000000319B64 "i"
 *   insn=0x0000000000319B64 string=0x0000000000319B68 "J"
 *   insn=0x0000000000319B70 string=0x0000000000319B74 "a"
 *   insn=0x0000000000319B80 string=0x0000000000319B84 "i"
 *   insn=0x0000000000319B84 string=0x0000000000319B88 "?"
 *   insn=0x0000000000319B88 string=0x0000000000319B8C """
 *   insn=0x0000000000319B8C string=0x0000000000319B90 "*"
 *   insn=0x0000000000319B94 string=0x0000000000319B98 "J"
 *   insn=0x0000000000319B98 string=0x0000000000319B9C ")"
 *   insn=0x0000000000319BA0 string=0x0000000000319BA4 "i"
 *   insn=0x0000000000319BA4 string=0x0000000000319BA8 "`"
 *   insn=0x0000000000319BB0 string=0x0000000000319BB4 "i"
 *   insn=0x0000000000319BB4 string=0x0000000000319BB8 "?"
 *   insn=0x0000000000319BBC string=0x0000000000319BC0 "*"
 *   insn=0x0000000000319BC4 string=0x0000000000319BC8 "J"
 *   insn=0x0000000000319BC8 string=0x0000000000319BCC ")"
 *   insn=0x0000000000319BD0 string=0x0000000000319BD4 "i"
 *   insn=0x0000000000319BD4 string=0x0000000000319BD8 "g"
 *   insn=0x0000000000319BE0 string=0x0000000000319BE4 "h"
 *   insn=0x0000000000319BE8 string=0x0000000000319BEC "B"
 *   insn=0x0000000000319BEC string=0x0000000000319BF0 "\t"
 *   insn=0x0000000000319BF0 string=0x0000000000319BF4 "\t"
 *   insn=0x0000000000319BF4 string=0x0000000000319BF8 ")"
 *   insn=0x0000000000319BF8 string=0x0000000000319BFC ""
 *   insn=0x0000000000319C00 string=0x0000000000319C04 "h"
 *   insn=0x0000000000319C08 string=0x0000000000319E88 "("
 *   insn=0x0000000000319C10 string=0x0000000000319C14 "i"
 *   insn=0x0000000000319C14 string=0x0000000000319C18 "?"
 *   insn=0x0000000000319C18 string=0x0000000000319C1C "B"
 *   insn=0x0000000000319C1C string=0x0000000000319C20 "*"
 *   insn=0x0000000000319C20 string=0x0000000000319C24 "\n"
 *   insn=0x0000000000319C24 string=0x0000000000319C28 "J"
 *   insn=0x0000000000319C28 string=0x0000000000319C2C ")"
 *   insn=0x0000000000319C30 string=0x0000000000319C34 "i"
 *   insn=0x0000000000319C34 string=0x0000000000319C38 ")"
 *   insn=0x0000000000319C44 string=0x0000000000319C48 "g"
 *   insn=0x0000000000319C50 string=0x0000000000319C54 "a"
 *   insn=0x0000000000319C54 string=0x0000000000319C58 "t"
 *   insn=0x0000000000319C6C string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000319C80 string=0x0000000000319C84 "@"
 *   insn=0x0000000000319C80 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000319C88 string=0x0000000000319C8C "i"
 *   insn=0x0000000000319C94 string=0x0000000000319C98 "?"
 *   insn=0x0000000000319C98 string=0x0000000000319C9C "j"
 *   insn=0x0000000000319CA4 string=0x0000000000319CA8 "*"
 *   insn=0x0000000000319CA8 string=0x0000000000319CAC "_A"
 *   insn=0x0000000000319CB0 string=0x0000000000319CB4 ")"
 *   insn=0x0000000000319CB4 string=0x0000000000319CB8 "i"
 *   insn=0x0000000000319CB8 string=0x0000000000319CBC "?"
 *   insn=0x0000000000319CD4 string=0x0000000000319CD8 "i"
 *   insn=0x0000000000319CE0 string=0x0000000000319CE4 "?"
 *   insn=0x0000000000319CE4 string=0x0000000000319CE8 "j"
 *   insn=0x0000000000319CF0 string=0x0000000000319CF4 "*"
 *   insn=0x0000000000319CF4 string=0x0000000000319CF8 "_a"
 *   insn=0x0000000000319CF8 string=0x0000000000319CFC "!"
 *   insn=0x0000000000319CFC string=0x0000000000319D00 ")"
 *   insn=0x0000000000319D00 string=0x0000000000319D04 "i"
 *   insn=0x0000000000319D04 string=0x0000000000319D08 "?"
 *   insn=0x0000000000319D08 string=0x0000000000319D0C "#"
 *   insn=0x0000000000319D20 string=0x0000000000319D24 "i"
 *   insn=0x0000000000319D2C string=0x0000000000319D30 "?"
 *   insn=0x0000000000319D30 string=0x0000000000319D34 "j"
 *   insn=0x0000000000319D38 string=0x0000000000319D3C """
 *   insn=0x0000000000319D3C string=0x0000000000319D40 "*"
 *   insn=0x0000000000319D40 string=0x0000000000319D44 "_"
 *   insn=0x0000000000319D48 string=0x0000000000319D4C ")"
 *   insn=0x0000000000319D4C string=0x0000000000319D50 "i"
 *   insn=0x0000000000319D50 string=0x0000000000319D54 "?"
 *   insn=0x0000000000319D54 string=0x0000000000319D58 "C"
 *   insn=0x0000000000319D64 string=0x0000000000319D68 " "
 *   insn=0x0000000000319D6C string=0x0000000000319D70 "i"
 *   insn=0x0000000000319D78 string=0x0000000000319D7C "?"
 *   insn=0x0000000000319D7C string=0x0000000000319D80 "j"
 *   insn=0x0000000000319D88 string=0x0000000000319D8C "("
 *   insn=0x0000000000319D90 string=0x0000000000319D94 "a"
 *   insn=0x0000000000319D94 string=0x0000000000319D98 "("
 *   insn=0x0000000000319D98 string=0x0000000000319D9C "h"
 *   insn=0x0000000000319DA4 string=0x0000000000319DA8 "j"
 *   insn=0x0000000000319DA8 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000319DB8 string=0x0000000000319DBC "("
 *   insn=0x0000000000319DC0 string=0x0000000000319DC4 "h"
 *   insn=0x0000000000319DCC string=0x0000000000319DD0 "\t"
 *   insn=0x0000000000319DD0 string=0x0000000000319DD4 "?"
 *   insn=0x0000000000319DD4 string=0x0000000000319DD8 "A"
 *   insn=0x0000000000319DD8 string=0x0000000000319DDC ""
 *   insn=0x0000000000319DDC string=0x0000000000319DE0 "h"
 *   insn=0x0000000000319DE8 string=0x0000000000319DEC "Y"
 *   insn=0x0000000000319DFC string=0x0000000000319E00 "("
 *   insn=0x0000000000319E04 string=0x0000000000319E08 "h"
 *   insn=0x0000000000319E10 string=0x0000000000319E14 "\t"
 *   insn=0x0000000000319E14 string=0x0000000000319E18 "?"
 *   insn=0x0000000000319E18 string=0x0000000000319E1C "!"
 *   insn=0x0000000000319E1C string=0x0000000000319E20 ""
 *   insn=0x0000000000319E20 string=0x0000000000319E24 "h"
 *   insn=0x0000000000319E2C string=0x0000000000319E30 "H"
 *   insn=0x0000000000319E40 string=0x0000000000319E44 "("
 *   insn=0x0000000000319E48 string=0x0000000000319E4C "h"
 *   insn=0x0000000000319E50 string=0x0000000000319E54 "b"
 *   insn=0x0000000000319E54 string=0x0000000000319E58 "\n"
 *   insn=0x0000000000319E58 string=0x0000000000319E5C "_"
 *   insn=0x0000000000319E60 string=0x0000000000319E64 ""
 *   insn=0x0000000000319E64 string=0x0000000000319E68 "h"
 *   insn=0x0000000000319E78 string=0x0000000000319E7C "u|"
 *   insn=0x0000000000319E7C string=0x0000000000319E80 "`"
 *   insn=0x0000000000319E90 string=0x0000000000319EA0 "h"
 *   insn=0x0000000000319E94 string=0x0000000000319E98 ""
 *   insn=0x0000000000319EA8 string=0x0000000000319EAC "h.@"
 *   insn=0x0000000000319EB8 string=0x0000000000319EBC "`"
 *   insn=0x0000000000319EF4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::EntityControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  unsigned __int64 v9; // x8
  char *v10; // x9
  unsigned int v11; // w10
  _BYTE *v12; // x9
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  char *v16; // x9
  unsigned int v17; // w10
  _BYTE *v18; // x9
  char *v19; // x8
  unsigned int v20; // w9
  char *v21; // x9
  unsigned int v22; // w10
  _BYTE *v23; // x9
  int v24; // w11
  int v25; // w11
  int v26; // w11
  int v27; // w11
  int v28; // w9
  _BYTE *v29; // x8
  int v30; // w9
  _BYTE *v31; // x8
  int v32; // w9
  _BYTE *v33; // x8
  unsigned __int64 v34; // x9
  int v35; // w8
  __int64 result; // x0
  unsigned int v37; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v38; // [xsp+8h] [xbp-28h]

  v38 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
        if ( (v6 & 7) != 0 )
          goto LABEL_35;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v37) & 1) == 0 )
            return 0;
          v11 = v37;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v37 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v24 = *((_DWORD *)this + 11);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 11) = v24 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v21 = v12 + 1;
        *((_QWORD *)a2 + 1) = v21;
        if ( (unsigned __int64)v21 < v9 )
          goto LABEL_28;
        goto LABEL_43;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_35;
        v21 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v21 >= v9 )
          goto LABEL_43;
LABEL_28:
        if ( *v21 < 0 )
        {
LABEL_43:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v37) & 1) == 0 )
            return 0;
          v22 = v37;
          v23 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v22 = (unsigned __int8)*v21;
          v23 = v21 + 1;
          v37 = v22;
          *((_QWORD *)a2 + 1) = v23;
        }
        v25 = *((_DWORD *)this + 11);
        *((_DWORD *)this + 4) = v22;
        *((_DWORD *)this + 11) = v25 | 2;
        if ( (unsigned __int64)v23 >= v9 || *v23 != 24 )
          continue;
        v13 = v23 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v9 )
          goto LABEL_48;
LABEL_16:
        if ( *v13 < 0 )
        {
LABEL_48:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v37) & 1) == 0 )
            return 0;
          v14 = v37;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v37 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v26 = *((_DWORD *)this + 11);
        *((_DWORD *)this + 5) = v14;
        *((_DWORD *)this + 11) = v26 | 4;
        if ( (unsigned __int64)v15 >= v9 || *v15 != 32 )
          continue;
        v16 = v15 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 >= v9 )
          goto LABEL_53;
LABEL_20:
        if ( *v16 < 0 )
        {
LABEL_53:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v37) & 1) == 0 )
            return 0;
          v17 = v37;
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = v16 + 1;
          v37 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v27 = *((_DWORD *)this + 11);
        *((_DWORD *)this + 6) = v17;
        *((_DWORD *)this + 11) = v27 | 8;
        if ( (unsigned __int64)v18 >= v9 || *v18 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v18 + 1;
LABEL_58:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v37) & 1) == 0 )
          return 0;
        v28 = *((_DWORD *)this + 11);
        *((_DWORD *)this + 7) = v37;
        *((_DWORD *)this + 11) = v28 | 0x10;
        v29 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v29 >= *((_QWORD *)a2 + 2) || *v29 != 53 )
          continue;
        *((_QWORD *)a2 + 1) = v29 + 1;
LABEL_62:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v37) & 1) == 0 )
          return 0;
        v30 = *((_DWORD *)this + 11);
        *((_DWORD *)this + 8) = v37;
        *((_DWORD *)this + 11) = v30 | 0x20;
        v31 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v31 >= *((_QWORD *)a2 + 2) || *v31 != 61 )
          continue;
        *((_QWORD *)a2 + 1) = v31 + 1;
LABEL_66:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v37) & 1) == 0 )
          return 0;
        v32 = *((_DWORD *)this + 11);
        *((_DWORD *)this + 9) = v37;
        *((_DWORD *)this + 11) = v32 | 0x40;
        v33 = (_BYTE *)*((_QWORD *)a2 + 1);
        v34 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v33 >= v34 || *v33 != 64 )
          continue;
        v19 = v33 + 1;
        *((_QWORD *)a2 + 1) = v19;
        if ( (unsigned __int64)v19 >= v34 )
          goto LABEL_70;
LABEL_24:
        if ( (*v19 & 0x80000000) == 0 )
        {
          v20 = (unsigned __int8)*v19;
          v37 = v20;
          *((_QWORD *)a2 + 1) = v19 + 1;
LABEL_72:
          if ( v20 - 1 <= 3 )
          {
            v35 = *((_DWORD *)this + 11) | 0x80;
            *((_DWORD *)this + 10) = v20;
            *((_DWORD *)this + 11) = v35;
          }
          if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
LABEL_70:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v37) & 1) != 0 )
        {
          v20 = v37;
          goto LABEL_72;
        }
        return 0;
      case 3u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_35;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v9 )
          goto LABEL_16;
        goto LABEL_48;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_35;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 < v9 )
          goto LABEL_20;
        goto LABEL_53;
      case 5u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_58;
        goto LABEL_35;
      case 6u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_62;
        goto LABEL_35;
      case 7u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_66;
        goto LABEL_35;
      case 8u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_35;
        v19 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v19 < *((_QWORD *)a2 + 2) )
          goto LABEL_24;
        goto LABEL_70;
      default:
        v8 = v6 & 7;
LABEL_35:
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

