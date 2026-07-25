/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000332C6C
 * Mangled: _ZN5Caver5Proto18MagicBoltComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MagicBoltComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000333010  Caver::Proto::MagicBoltComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 109
 *   insn=0x0000000000332C80 string=0x0000000000332C84 "W"
 *   insn=0x0000000000332C9C string=0x0000000000332CA0 "h"
 *   insn=0x0000000000332CA4 string=0x0000000000332CA8 """
 *   insn=0x0000000000332CA8 string=0x0000000000332CAC "\t"
 *   insn=0x0000000000332CB0 string=0x0000000000332CB4 "!"
 *   insn=0x0000000000332CB4 string=0x0000000000332CB8 ""
 *   insn=0x0000000000332CB8 string=0x0000000000332CBC "a""
 *   insn=0x0000000000332CBC string=0x0000000000332CC0 "h"
 *   insn=0x0000000000332CC4 string=0x0000000000332CE0 "(|"
 *   insn=0x0000000000332CCC string=0x0000000000332CD0 "\"
 *   insn=0x0000000000332CD0 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000332CD4 string=0x0000000000332CD8 "a""
 *   insn=0x0000000000332CD8 string=0x0000000000332CDC "A"
 *   insn=0x0000000000332CE0 string=0x0000000000332CE4 ""
 *   insn=0x0000000000332CE8 string=0x0000000000332CEC "("
 *   insn=0x0000000000332CEC string=0x0000000000332CF0 "{"
 *   insn=0x0000000000332CEC string=0x0000000000332DB0 "("
 *   insn=0x0000000000332CF0 string=0x0000000000332CF4 ""
 *   insn=0x0000000000332CF8 string=0x0000000000332CFC "("
 *   insn=0x0000000000332CF8 string=0x0000000000332D2C "("
 *   insn=0x0000000000332CF8 string=0x0000000000332D3C "("
 *   insn=0x0000000000332CF8 string=0x0000000000332D6C "("
 *   insn=0x0000000000332CF8 string=0x0000000000332D80 "("
 *   insn=0x0000000000332D00 string=0x0000000000332D04 "i"
 *   insn=0x0000000000332D04 string=0x0000000000332D08 "?"
 *   insn=0x0000000000332D0C string=0x0000000000332D10 "*"
 *   insn=0x0000000000332D14 string=0x0000000000332D18 "J"
 *   insn=0x0000000000332D18 string=0x0000000000332D1C ")"
 *   insn=0x0000000000332D20 string=0x0000000000332D24 "i"
 *   insn=0x0000000000332D24 string=0x0000000000332D28 "/"
 *   insn=0x0000000000332D40 string=0x0000000000332D44 "i"
 *   insn=0x0000000000332D44 string=0x0000000000332D48 "?"
 *   insn=0x0000000000332D4C string=0x0000000000332D50 "*"
 *   insn=0x0000000000332D54 string=0x0000000000332D58 "J"
 *   insn=0x0000000000332D58 string=0x0000000000332D5C ")"
 *   insn=0x0000000000332D60 string=0x0000000000332D64 "i"
 *   insn=0x0000000000332D64 string=0x0000000000332D68 "E"
 *   insn=0x0000000000332D78 string=0x0000000000332D7C "K"
 *   insn=0x0000000000332D84 string=0x0000000000332D88 "i"
 *   insn=0x0000000000332D88 string=0x0000000000332D8C "?"
 *   insn=0x0000000000332D8C string=0x0000000000332D90 "B"
 *   insn=0x0000000000332D90 string=0x0000000000332D94 "*"
 *   insn=0x0000000000332D94 string=0x0000000000332D98 "\n"
 *   insn=0x0000000000332D98 string=0x0000000000332D9C "J"
 *   insn=0x0000000000332D9C string=0x0000000000332DA0 ")"
 *   insn=0x0000000000332DA4 string=0x0000000000332DA8 "i"
 *   insn=0x0000000000332DA8 string=0x0000000000332DAC "!"
 *   insn=0x0000000000332DB4 string=0x0000000000332DB8 "`"
 *   insn=0x0000000000332DC0 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000332DD4 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000332DDC string=0x0000000000332DE0 "i"
 *   insn=0x0000000000332DE8 string=0x0000000000332DEC "?"
 *   insn=0x0000000000332DEC string=0x0000000000332DF0 "j"
 *   insn=0x0000000000332DF4 string=0x0000000000332DF8 "B"
 *   insn=0x0000000000332DF8 string=0x0000000000332DFC "*"
 *   insn=0x0000000000332DFC string=0x0000000000332E00 "_A"
 *   insn=0x0000000000332E04 string=0x0000000000332E08 ")"
 *   insn=0x0000000000332E08 string=0x0000000000332E0C "i"
 *   insn=0x0000000000332E0C string=0x0000000000332E10 "?"
 *   insn=0x0000000000332E20 string=0x0000000000332E24 "@"
 *   insn=0x0000000000332E28 string=0x0000000000332E2C "i"
 *   insn=0x0000000000332E34 string=0x0000000000332E38 "?"
 *   insn=0x0000000000332E38 string=0x0000000000332E3C "j"
 *   insn=0x0000000000332E44 string=0x0000000000332E48 "*"
 *   insn=0x0000000000332E48 string=0x0000000000332E4C "_a"
 *   insn=0x0000000000332E50 string=0x0000000000332E54 ")"
 *   insn=0x0000000000332E54 string=0x0000000000332E58 "i"
 *   insn=0x0000000000332E58 string=0x0000000000332E5C "?"
 *   insn=0x0000000000332E68 string=0x0000000000332E6C "y"
 *   insn=0x0000000000332E74 string=0x0000000000332E78 "i"
 *   insn=0x0000000000332E80 string=0x0000000000332E84 "?"
 *   insn=0x0000000000332E84 string=0x0000000000332E88 "j"
 *   insn=0x0000000000332E90 string=0x0000000000332E94 "("
 *   insn=0x0000000000332E98 string=0x0000000000332E9C "!"
 *   insn=0x0000000000332E9C string=0x0000000000332EA0 "("
 *   insn=0x0000000000332EA0 string=0x0000000000332EA4 "h"
 *   insn=0x0000000000332EA8 string=0x0000000000332EAC "H"
 *   insn=0x0000000000332EB4 string=0x0000000000332ECC "h"
 *   insn=0x0000000000332EBC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000332EC4 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000332ED4 string=0x0000000000332ED8 "\t"
 *   insn=0x0000000000332EDC string=0x0000000000332EE0 ")"
 *   insn=0x0000000000332EE0 string=0x0000000000332EE4 ""
 *   insn=0x0000000000332EE8 string=0x0000000000332EEC "h"
 *   insn=0x0000000000332EF0 string=0x0000000000332F04 "h&G)\n"
 *   insn=0x0000000000332EF8 string=0x0000000000332EFC "U"
 *   insn=0x0000000000332EFC string=0x0000000000332F00 "`"
 *   insn=0x0000000000332F04 string=0x0000000000332F08 "\n"
 *   insn=0x0000000000332F0C string=0x0000000000332F10 "j:"
 *   insn=0x0000000000332F2C string=0x0000000000332F30 "p>"
 *   insn=0x0000000000332F34 string=0x0000000000332F38 "h"
 *   insn=0x0000000000332F48 string=0x0000000000332F4C "h:@"
 *   insn=0x0000000000332F4C string=0x0000000000332F50 ""
 *   insn=0x0000000000332F50 string=0x0000000000332F54 "K"
 *   insn=0x0000000000332F54 string=0x0000000000332F58 "h:"
 *   insn=0x0000000000332F54 string=0x0000000000332F5C "h"
 *   insn=0x0000000000332F64 string=0x0000000000332F68 "\t"
 *   insn=0x0000000000332F68 string=0x0000000000332F6C "?"
 *   insn=0x0000000000332F70 string=0x0000000000332F74 ""
 *   insn=0x0000000000332F74 string=0x0000000000332F78 "h"
 *   insn=0x0000000000332F84 string=0x0000000000332F88 " "
 *   insn=0x0000000000332F84 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000332F94 string=0x0000000000332F98 "("
 *   insn=0x0000000000332F9C string=0x0000000000332FA0 "h"
 *   insn=0x0000000000332FA8 string=0x0000000000332FAC "h.@"
 *   insn=0x0000000000332FB8 string=0x0000000000332FBC "`"
 *   insn=0x0000000000332FF8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000333004 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000333008 string=0x000000000033300C ".:\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBoltComponent::MergePartialFromCodedStream(
        Caver::Proto::MagicBoltComponent *this,
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
  int v16; // w10
  char *v17; // x9
  unsigned int v18; // w10
  _BYTE *v19; // x9
  int v20; // w11
  int v21; // w11
  int v22; // w11
  Caver::Proto::FloatColor *v23; // x21
  char *v24; // x8
  int v25; // w8
  int v26; // w9
  int v27; // w22
  int v28; // w8
  bool v29; // vf
  int v30; // w8
  _BYTE *v31; // x8
  int v32; // w9
  __int64 result; // x0
  unsigned int v34; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v35; // [xsp+8h] [xbp-38h]

  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_25;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
            return 0;
          v11 = v34;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v34 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v20 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 9) = v20 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v17 = v12 + 1;
        *((_QWORD *)a2 + 1) = v17;
        if ( (unsigned __int64)v17 < v9 )
          goto LABEL_22;
        goto LABEL_33;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v17 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v17 >= v9 )
          goto LABEL_33;
LABEL_22:
        if ( *v17 < 0 )
        {
LABEL_33:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
            return 0;
          v18 = v34;
          v19 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v18 = (unsigned __int8)*v17;
          v19 = v17 + 1;
          v34 = v18;
          *((_QWORD *)a2 + 1) = v19;
        }
        v21 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 4) = v18;
        *((_DWORD *)this + 9) = v21 | 2;
        if ( (unsigned __int64)v19 >= v9 || *v19 != 24 )
          continue;
        v13 = v19 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v9 )
          goto LABEL_38;
LABEL_16:
        if ( *v13 < 0 )
        {
LABEL_38:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
            return 0;
          v14 = v34;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v34 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v22 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 5) = v14;
        v16 = v22 | 4;
        *((_DWORD *)this + 9) = v22 | 4;
        if ( (unsigned __int64)v15 >= v9 || *v15 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v15 + 1;
LABEL_43:
        v23 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 9) = v16 | 8;
        if ( !v23 )
        {
          v23 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v23);
          *((_QWORD *)this + 3) = v23;
        }
        v24 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v24 >= *((_QWORD *)a2 + 2) || *v24 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
            return 0;
        }
        else
        {
          v34 = (unsigned __int8)*v24;
          *((_QWORD *)a2 + 1) = v24 + 1;
        }
        v25 = *((_DWORD *)a2 + 14);
        v26 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v25 + 1;
        if ( v25 >= v26 )
          return 0;
        v27 = google::protobuf::io::CodedInputStream::PushLimit(a2, v34);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v23, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v27);
        v28 = *((_DWORD *)a2 + 14);
        v29 = __OFSUB__(v28, 1);
        v30 = v28 - 1;
        if ( v30 < 0 == v29 )
          *((_DWORD *)a2 + 14) = v30;
        v31 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v31 >= *((_QWORD *)a2 + 2) || *v31 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v31 + 1;
LABEL_57:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v34) & 1) != 0 )
        {
          v32 = *((_DWORD *)this + 9);
          *((_DWORD *)this + 8) = v34;
          *((_DWORD *)this + 9) = v32 | 0x10;
          if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
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
        v13 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v9 )
          goto LABEL_16;
        goto LABEL_38;
      case 4u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_25;
        v16 = *((_DWORD *)this + 9);
        goto LABEL_43;
      case 5u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_57;
        goto LABEL_25;
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

