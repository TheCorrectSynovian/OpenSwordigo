/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030CE5C
 * Mangled: _ZN5Caver5Proto15DamageComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::DamageComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 * Referenced strings: 163
 *   insn=0x000000000030CE6C string=0x000000000030CE70 "U"
 *   insn=0x000000000030CE88 string=0x000000000030CE8C "!"
 *   insn=0x000000000030CE8C string=0x000000000030D310 "h"
 *   insn=0x000000000030CE94 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000030CE98 string=0x000000000030CE9C "a""
 *   insn=0x000000000030CEA0 string=0x000000000030CEA4 "(|"
 *   insn=0x000000000030CEA4 string=0x000000000030CEA8 ""
 *   insn=0x000000000030CEB0 string=0x000000000030D288 "("
 *   insn=0x000000000030CEB4 string=0x000000000030CEB8 ""
 *   insn=0x000000000030CEBC string=0x000000000030CEC0 "("
 *   insn=0x000000000030CEBC string=0x000000000030CEF0 "("
 *   insn=0x000000000030CEBC string=0x000000000030CF20 "("
 *   insn=0x000000000030CEBC string=0x000000000030CFA8 "("
 *   insn=0x000000000030CEBC string=0x000000000030D058 "("
 *   insn=0x000000000030CEBC string=0x000000000030D088 "("
 *   insn=0x000000000030CEBC string=0x000000000030D114 "("
 *   insn=0x000000000030CEBC string=0x000000000030D168 "("
 *   insn=0x000000000030CEBC string=0x000000000030D230 "("
 *   insn=0x000000000030CEC0 string=0x000000000030CEC4 "A"
 *   insn=0x000000000030CEC4 string=0x000000000030CEC8 "i"
 *   insn=0x000000000030CEC8 string=0x000000000030CECC "?"
 *   insn=0x000000000030CED0 string=0x000000000030CED4 "*"
 *   insn=0x000000000030CED4 string=0x000000000030CED8 "j"
 *   insn=0x000000000030CED8 string=0x000000000030CEDC "J"
 *   insn=0x000000000030CEDC string=0x000000000030CEE0 ")"
 *   insn=0x000000000030CEE4 string=0x000000000030CEE8 "i"
 *   insn=0x000000000030CEF4 string=0x000000000030CEF8 "i"
 *   insn=0x000000000030CEF8 string=0x000000000030CEFC "?"
 *   insn=0x000000000030CF00 string=0x000000000030CF04 "*"
 *   insn=0x000000000030CF04 string=0x000000000030CF08 "J"
 *   insn=0x000000000030CF08 string=0x000000000030CF0C "J"
 *   insn=0x000000000030CF0C string=0x000000000030CF10 ")"
 *   insn=0x000000000030CF14 string=0x000000000030CF18 "i"
 *   insn=0x000000000030CF18 string=0x000000000030CF1C "C"
 *   insn=0x000000000030CF20 string=0x000000000030CF24 "A"
 *   insn=0x000000000030CF24 string=0x000000000030CF28 "h"
 *   insn=0x000000000030CF2C string=0x000000000030CF30 """
 *   insn=0x000000000030CF30 string=0x000000000030CF34 "\t"
 *   insn=0x000000000030CF38 string=0x000000000030CF3C ")"
 *   insn=0x000000000030CF3C string=0x000000000030CF40 ""
 *   insn=0x000000000030CF44 string=0x000000000030CF48 "h"
 *   insn=0x000000000030CF48 string=0x000000000030CF4C "?\t"
 *   insn=0x000000000030CF50 string=0x000000000030CF64 "i"
 *   insn=0x000000000030CF58 string=0x000000000030CF5C ""
 *   insn=0x000000000030CF64 string=0x000000000030CF68 "?"
 *   insn=0x000000000030CF68 string=0x000000000030CF6C """
 *   insn=0x000000000030CF6C string=0x000000000030CF70 "*"
 *   insn=0x000000000030CF70 string=0x000000000030CF74 "_"
 *   insn=0x000000000030CF78 string=0x000000000030CF7C ")"
 *   insn=0x000000000030CF7C string=0x000000000030CF80 "i"
 *   insn=0x000000000030CF80 string=0x000000000030CF84 "?"
 *   insn=0x000000000030CF88 string=0x000000000030CF8C "*"
 *   insn=0x000000000030CF8C string=0x000000000030CF90 "j"
 *   insn=0x000000000030CF90 string=0x000000000030CF94 "J"
 *   insn=0x000000000030CF94 string=0x000000000030CF98 ")"
 *   insn=0x000000000030CF9C string=0x000000000030CFA0 "i"
 *   insn=0x000000000030CFAC string=0x000000000030CFB0 "i"
 *   insn=0x000000000030CFB0 string=0x000000000030CFB4 "?"
 *   insn=0x000000000030CFC0 string=0x000000000030CFC4 "#"
 *   insn=0x000000000030CFC4 string=0x00000000001F9050 "0'"
 *   insn=0x000000000030CFCC string=0x000000000030CFD0 "i"
 *   insn=0x000000000030CFD4 string=0x000000000030CFD8 "_"
 *   insn=0x000000000030CFE0 string=0x000000000030CFE4 "j"
 *   insn=0x000000000030CFE4 string=0x000000000030CFE8 "?"
 *   insn=0x000000000030CFF0 string=0x000000000030CFF4 "*"
 *   insn=0x000000000030CFF4 string=0x000000000030CFF8 "_"
 *   insn=0x000000000030CFFC string=0x000000000030D000 ")"
 *   insn=0x000000000030D000 string=0x000000000030D004 "i"
 *   insn=0x000000000030D004 string=0x000000000030D008 "?"
 *   insn=0x000000000030D018 string=0x000000000030D01C " "
 *   insn=0x000000000030D020 string=0x000000000030D024 "i"
 *   insn=0x000000000030D02C string=0x000000000030D030 "?"
 *   insn=0x000000000030D030 string=0x000000000030D034 "j"
 *   insn=0x000000000030D03C string=0x000000000030D040 "("
 *   insn=0x000000000030D044 string=0x000000000030D048 "A"
 *   insn=0x000000000030D048 string=0x000000000030D04C "("
 *   insn=0x000000000030D04C string=0x000000000030D050 "h"
 *   insn=0x000000000030D050 string=0x000000000030D054 "3"
 *   insn=0x000000000030D05C string=0x000000000030D060 "i"
 *   insn=0x000000000030D060 string=0x000000000030D064 "?"
 *   insn=0x000000000030D068 string=0x000000000030D06C "*"
 *   insn=0x000000000030D070 string=0x000000000030D074 "J"
 *   insn=0x000000000030D074 string=0x000000000030D078 ")"
 *   insn=0x000000000030D07C string=0x000000000030D080 "i"
 *   insn=0x000000000030D080 string=0x000000000030D084 "U"
 *   insn=0x000000000030D08C string=0x000000000030D090 "i"
 *   insn=0x000000000030D090 string=0x000000000030D094 "?"
 *   insn=0x000000000030D098 string=0x000000000030D09C "("
 *   insn=0x000000000030D0A0 string=0x000000000030D0A4 ""
 *   insn=0x000000000030D0A4 string=0x000000000030D0A8 ")"
 *   insn=0x000000000030D0AC string=0x000000000030D0B0 "i"
 *   insn=0x000000000030D0B8 string=0x000000000030D0CC "h"
 *   insn=0x000000000030D0C0 string=0x000000000030D0C4 ")"
 *   insn=0x000000000030D0D4 string=0x000000000030D0D8 "\n"
 *   insn=0x000000000030D0D8 string=0x000000000030D0DC "_a"
 *   insn=0x000000000030D0E0 string=0x000000000030D0E4 ""
 *   insn=0x000000000030D0E4 string=0x000000000030D0E8 "h"
 *   insn=0x000000000030D0EC string=0x000000000030D0F0 "#"
 *   insn=0x000000000030D104 string=0x000000000030D108 "?\t"
 *   insn=0x000000000030D108 string=0x000000000030D10C "I"
 *   insn=0x000000000030D128 string=0x00000000001FA750 "0'"
 *   insn=0x000000000030D138 string=0x000000000030D13C "("
 *   insn=0x000000000030D140 string=0x000000000030D144 "h"
 *   insn=0x000000000030D148 string=0x000000000030D14C """
 *   insn=0x000000000030D14C string=0x000000000030D150 "\t"
 *   insn=0x000000000030D150 string=0x000000000030D154 "?"
 *   insn=0x000000000030D158 string=0x000000000030D15C ""
 *   insn=0x000000000030D15C string=0x000000000030D160 "h"
 *   insn=0x000000000030D178 string=0x000000000030D17C "u"
 *   insn=0x000000000030D18C string=0x000000000030D190 "("
 *   insn=0x000000000030D194 string=0x000000000030D198 "i"
 *   insn=0x000000000030D198 string=0x000000000030D19C "?"
 *   insn=0x000000000030D1A0 string=0x000000000030D1A4 "*"
 *   insn=0x000000000030D1A4 string=0x000000000030D1A8 "_"
 *   insn=0x000000000030D1A8 string=0x000000000030D1AC "!"
 *   insn=0x000000000030D1AC string=0x000000000030D1B0 ")"
 *   insn=0x000000000030D1B0 string=0x000000000030D1B4 "i"
 *   insn=0x000000000030D1B4 string=0x000000000030D1B8 "?"
 *   insn=0x000000000030D1D0 string=0x000000000030D1D4 "i"
 *   insn=0x000000000030D1D8 string=0x000000000030D1DC "_"
 *   insn=0x000000000030D1E4 string=0x000000000030D1E8 "j"
 *   insn=0x000000000030D1E8 string=0x000000000030D1EC "?"
 *   insn=0x000000000030D1F4 string=0x000000000030D1F8 "*"
 *   insn=0x000000000030D1F8 string=0x000000000030D1FC "_!"
 *   insn=0x000000000030D200 string=0x000000000030D204 "*"
 *   insn=0x000000000030D204 string=0x000000000030D208 "j"
 *   insn=0x000000000030D208 string=0x000000000030D20C "_"
 *   insn=0x000000000030D210 string=0x000000000030D214 "I"
 *   insn=0x000000000030D214 string=0x000000000030D218 "i"
 *   insn=0x000000000030D218 string=0x000000000030D21C ")"
 *   insn=0x000000000030D21C string=0x000000000030D220 "J"
 *   insn=0x000000000030D224 string=0x000000000030D228 "j"
 *   insn=0x000000000030D234 string=0x000000000030D238 "j"
 *   insn=0x000000000030D238 string=0x000000000030D23C "_"
 *   insn=0x000000000030D254 string=0x000000000030D258 "j"
 *   insn=0x000000000030D25C string=0x000000000030D260 "?"
 *   insn=0x000000000030D268 string=0x000000000030D26C "i"
 *   insn=0x000000000030D26C string=0x000000000030D270 "_"
 *   insn=0x000000000030D278 string=0x000000000030D27C "h.@"
 *   insn=0x000000000030D280 string=0x000000000030D284 "9"
 *   insn=0x000000000030D28C string=0x000000000030D290 "@"
 *   insn=0x000000000030D298 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000030D29C string=0x000000000030D2A0 "("
 *   insn=0x000000000030D2A8 string=0x000000000030D2AC "i"
 *   insn=0x000000000030D2B4 string=0x000000000030D2B8 "i"
 *   insn=0x000000000030D2C0 string=0x000000000030D2C4 "?"
 *   insn=0x000000000030D2C4 string=0x000000000030D2C8 "j"
 *   insn=0x000000000030D2D0 string=0x000000000030D2D4 "*"
 *   insn=0x000000000030D2D4 string=0x000000000030D2D8 "_A"
 *   insn=0x000000000030D2DC string=0x000000000030D2E0 ")"
 *   insn=0x000000000030D2E0 string=0x000000000030D2E4 "i"
 *   insn=0x000000000030D2E4 string=0x000000000030D2E8 "?"
 *   insn=0x000000000030D2F4 string=0x000000000030D2F8 "V"
 *   insn=0x000000000030D2F8 string=0x000000000030D2FC " "
 *   insn=0x000000000030D308 string=0x000000000030D30C "p"
 *   insn=0x000000000030D318 string=0x000000000030D31C "\t"
 *   insn=0x000000000030D320 string=0x000000000030D324 "!"
 *   insn=0x000000000030D324 string=0x000000000030D328 ""
 *   insn=0x000000000030D328 string=0x000000000030D32C "a""
 *   insn=0x000000000030D32C string=0x000000000030D330 "h"
 *   insn=0x000000000030D34C string=0x000000000030D350 "A"
 *   insn=0x000000000030D36C string=0x000000000030D370 "`"
 *   insn=0x000000000030D378 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DamageComponent::MergePartialFromCodedStream(
        Caver::Proto::DamageComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned int TagFallback; // w0
  unsigned __int64 v6; // x1
  int v7; // w8
  unsigned __int64 v8; // x8
  char *v9; // x9
  unsigned int v10; // w10
  _BYTE *v11; // x9
  unsigned __int64 v12; // x8
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  char *v16; // x8
  unsigned int v17; // w9
  int v18; // w8
  _BYTE *v19; // x9
  char *v20; // x9
  unsigned int v21; // w10
  _BYTE *v22; // x9
  int v23; // w11
  int v24; // w11
  unsigned __int64 v25; // x8
  unsigned __int8 *v26; // x9
  unsigned int v27; // w10
  _BYTE *v28; // x9
  char *v29; // x9
  unsigned int v30; // w8
  int v31; // w9
  _BYTE *v32; // x8
  unsigned __int64 v33; // x9
  int v34; // w9
  _BYTE *v35; // x8
  int v36; // w9
  _BYTE *v37; // x9
  int v38; // w11
  unsigned __int8 *v39; // x10
  unsigned int v40; // w9
  char *v41; // x10
  int v42; // w11
  int v43; // w11
  char *v44; // x8
  __int64 result; // x0
  unsigned int v46; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v47; // [xsp+8h] [xbp-28h]

  v47 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
  {
    v44 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v44 >= *((_QWORD *)a2 + 2) || *v44 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v6 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v6 = (unsigned __int8)*v44;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v44 + 1;
      if ( !(_DWORD)v6 )
        return 1;
    }
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_74;
        v9 = (char *)*((_QWORD *)a2 + 1);
        v8 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v9 >= v8 || *v9 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v46) & 1) == 0 )
            return 0;
          v10 = v46;
          v11 = (_BYTE *)*((_QWORD *)a2 + 1);
          v8 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v10 = (unsigned __int8)*v9;
          v11 = v9 + 1;
          v46 = v10;
          *((_QWORD *)a2 + 1) = v11;
        }
        v43 = *((_DWORD *)this + 11);
        *((_DWORD *)this + 3) = v10;
        *((_DWORD *)this + 11) = v43 | 1;
        if ( (unsigned __int64)v11 >= v8 || *v11 != 16 )
          continue;
        v29 = v11 + 1;
        *((_QWORD *)a2 + 1) = v29;
        if ( (unsigned __int64)v29 < v8 )
          goto LABEL_40;
        goto LABEL_82;
      case 2u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_74;
        v29 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v29 >= *((_QWORD *)a2 + 2) )
          goto LABEL_82;
LABEL_40:
        if ( (*v29 & 0x80000000) == 0 )
        {
          v30 = (unsigned __int8)*v29;
          v46 = v30;
          *((_QWORD *)a2 + 1) = v29 + 1;
          if ( v30 > 1 )
            goto LABEL_43;
LABEL_42:
          v31 = *((_DWORD *)this + 11);
          *((_DWORD *)this + 5) = v30;
          *((_DWORD *)this + 11) = v31 | 4;
          goto LABEL_43;
        }
LABEL_82:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v46) & 1) == 0 )
          return 0;
        v30 = v46;
        if ( v46 <= 1 )
          goto LABEL_42;
LABEL_43:
        v32 = (_BYTE *)*((_QWORD *)a2 + 1);
        v33 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v32 >= v33 || *v32 != 24 )
          continue;
        v16 = v32 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 >= v33 )
          goto LABEL_46;
LABEL_14:
        if ( (*v16 & 0x80000000) == 0 )
        {
          v17 = (unsigned __int8)*v16;
          v46 = v17;
          *((_QWORD *)a2 + 1) = v16 + 1;
          if ( v17 > 2 )
            goto LABEL_17;
LABEL_16:
          v18 = *((_DWORD *)this + 11);
          *((_DWORD *)this + 6) = v17;
          *((_DWORD *)this + 11) = v18 | 8;
          goto LABEL_17;
        }
LABEL_46:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v46) & 1) == 0 )
          return 0;
        v17 = v46;
        if ( v46 <= 2 )
          goto LABEL_16;
LABEL_17:
        v19 = (_BYTE *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v19 >= v12 || *v19 != 32 )
          continue;
        v20 = v19 + 1;
        *((_QWORD *)a2 + 1) = v20;
        if ( (unsigned __int64)v20 >= v12 )
          goto LABEL_24;
LABEL_20:
        if ( *v20 < 0 )
        {
LABEL_24:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v46) & 1) == 0 )
            return 0;
          v21 = v46;
          v22 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v21 = (unsigned __int8)*v20;
          v22 = v20 + 1;
          v46 = v21;
          *((_QWORD *)a2 + 1) = v22;
        }
        v23 = *((_DWORD *)this + 11);
        *((_BYTE *)this + 28) = v21 != 0;
        *((_DWORD *)this + 11) = v23 | 0x10;
        if ( (unsigned __int64)v22 >= v12 || *v22 != 40 )
          continue;
        v13 = v22 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v12 )
          goto LABEL_29;
LABEL_10:
        if ( *v13 < 0 )
        {
LABEL_29:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v46) & 1) == 0 )
            return 0;
          v14 = v46;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v46 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v24 = *((_DWORD *)this + 11);
        *((_DWORD *)this + 4) = v14;
        *((_DWORD *)this + 11) = v24 | 2;
        if ( (unsigned __int64)v15 >= v12 || *v15 != 53 )
          continue;
        *((_QWORD *)a2 + 1) = v15 + 1;
LABEL_50:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v46) & 1) != 0 )
        {
          v34 = *((_DWORD *)this + 11);
          *((_DWORD *)this + 8) = v46;
          *((_DWORD *)this + 11) = v34 | 0x20;
          v35 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v35 < *((_QWORD *)a2 + 2) && *v35 == 61 )
          {
            *((_QWORD *)a2 + 1) = v35 + 1;
LABEL_55:
            if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v46) & 1) == 0 )
              return 0;
            v36 = *((_DWORD *)this + 11);
            *((_DWORD *)this + 9) = v46;
            *((_DWORD *)this + 11) = v36 | 0x40;
            v37 = (_BYTE *)*((_QWORD *)a2 + 1);
            v25 = *((_QWORD *)a2 + 2);
            if ( (unsigned __int64)v37 < v25 && *v37 == 64 )
            {
              v26 = v37 + 1;
              *((_QWORD *)a2 + 1) = v26;
              if ( (unsigned __int64)v26 >= v25 )
              {
LABEL_59:
                if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v46) & 1) == 0 )
                  return 0;
                v27 = v46;
                v28 = (_BYTE *)*((_QWORD *)a2 + 1);
                v25 = *((_QWORD *)a2 + 2);
                goto LABEL_61;
              }
LABEL_36:
              if ( (char)*v26 < 0 )
                goto LABEL_59;
              v27 = *v26;
              v28 = v26 + 1;
              v46 = v27;
              *((_QWORD *)a2 + 1) = v28;
LABEL_61:
              v38 = *((_DWORD *)this + 11);
              *((_BYTE *)this + 40) = v27 != 0;
              *((_DWORD *)this + 11) = v38 | 0x80;
              if ( (unsigned __int64)v28 < v25 && *v28 == 72 )
              {
                v39 = v28 + 1;
                *((_QWORD *)a2 + 1) = v28 + 1;
                if ( (unsigned __int64)(v28 + 1) >= v25 )
                  goto LABEL_68;
LABEL_64:
                if ( (char)*v39 < 0 )
                {
LABEL_68:
                  if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v46) & 1) == 0 )
                    return 0;
                  v40 = v46;
                  v41 = (char *)*((_QWORD *)a2 + 1);
                  v25 = *((_QWORD *)a2 + 2);
                  goto LABEL_70;
                }
                v40 = *v39;
                v41 = (char *)(v39 + 1);
                v46 = v40;
                *((_QWORD *)a2 + 1) = v41;
LABEL_70:
                v42 = *((_DWORD *)this + 11);
                *((_BYTE *)this + 41) = v40 != 0;
                *((_DWORD *)this + 11) = v42 | 0x100;
                if ( v41 == (char *)v25 && *((_DWORD *)a2 + 11) )
                {
                  result = 1;
                  *((_DWORD *)a2 + 8) = 0;
                  *((_BYTE *)a2 + 36) = 1;
                  return result;
                }
              }
            }
          }
          continue;
        }
        return 0;
      case 3u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_74;
        v16 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v16 < *((_QWORD *)a2 + 2) )
          goto LABEL_14;
        goto LABEL_46;
      case 4u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_74;
        v20 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v20 >= v12 )
          goto LABEL_24;
        goto LABEL_20;
      case 5u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_74;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v12 )
          goto LABEL_10;
        goto LABEL_29;
      case 6u:
        v7 = v6 & 7;
        if ( v7 == 5 )
          goto LABEL_50;
        goto LABEL_74;
      case 7u:
        v7 = v6 & 7;
        if ( v7 == 5 )
          goto LABEL_55;
        goto LABEL_74;
      case 8u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_74;
        v26 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v25 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v26 < v25 )
          goto LABEL_36;
        goto LABEL_59;
      case 9u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_74;
        v39 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v25 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v39 >= v25 )
          goto LABEL_68;
        goto LABEL_64;
      default:
        v7 = v6 & 7;
LABEL_74:
        if ( v7 == 4 )
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

