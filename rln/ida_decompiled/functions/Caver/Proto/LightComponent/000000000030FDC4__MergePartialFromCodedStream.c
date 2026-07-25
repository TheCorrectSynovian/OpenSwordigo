/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030FDC4
 * Mangled: _ZN5Caver5Proto14LightComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::LightComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000310274  Caver::Proto::LightComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 138
 *   insn=0x000000000030FDD8 string=0x000000000030FDDC "W"
 *   insn=0x000000000030FDF8 string=0x00000000003101EC "h"
 *   insn=0x000000000030FE00 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000030FE04 string=0x000000000030FE08 "a""
 *   insn=0x000000000030FE08 string=0x000000000030FE0C "A "
 *   insn=0x000000000030FE0C string=0x000000000030FE10 "(|"
 *   insn=0x000000000030FE10 string=0x000000000030FE14 ""
 *   insn=0x000000000030FE18 string=0x000000000030FE1C "h"
 *   insn=0x000000000030FE1C string=0x000000000030FE20 "{"
 *   insn=0x000000000030FE1C string=0x000000000030FEC8 "("
 *   insn=0x000000000030FE20 string=0x000000000030FE24 ""
 *   insn=0x000000000030FE28 string=0x000000000030FE2C "("
 *   insn=0x000000000030FE28 string=0x000000000030FE94 "("
 *   insn=0x000000000030FE28 string=0x000000000030FEA4 "("
 *   insn=0x000000000030FE28 string=0x000000000030FEB8 "("
 *   insn=0x000000000030FE28 string=0x000000000030FED8 "("
 *   insn=0x000000000030FE28 string=0x000000000030FF74 "("
 *   insn=0x000000000030FE28 string=0x000000000030FF88 "("
 *   insn=0x000000000030FE2C string=0x000000000030FE30 "!"
 *   insn=0x000000000030FE30 string=0x000000000030FE34 "i"
 *   insn=0x000000000030FE34 string=0x000000000030FE38 "?"
 *   insn=0x000000000030FE3C string=0x000000000030FE40 "("
 *   insn=0x000000000030FE40 string=0x000000000030FE44 "H"
 *   insn=0x000000000030FE44 string=0x000000000030FE48 ""
 *   insn=0x000000000030FE48 string=0x000000000030FE4C ")"
 *   insn=0x000000000030FE50 string=0x000000000030FE54 "i"
 *   insn=0x000000000030FE5C string=0x000000000030FE70 "h"
 *   insn=0x000000000030FE64 string=0x000000000030FE68 ")"
 *   insn=0x000000000030FE78 string=0x000000000030FE7C "\t"
 *   insn=0x000000000030FE7C string=0x000000000030FE80 "?U"
 *   insn=0x000000000030FE80 string=0x000000000030FE84 "A"
 *   insn=0x000000000030FE84 string=0x000000000030FE88 ""
 *   insn=0x000000000030FE88 string=0x000000000030FE8C "h"
 *   insn=0x000000000030FE9C string=0x000000000030FEA0 "v"
 *   insn=0x000000000030FEA8 string=0x000000000030FEAC "A"
 *   insn=0x000000000030FEC0 string=0x000000000030FEC4 "\"
 *   insn=0x000000000030FECC string=0x000000000030FED0 "a"
 *   insn=0x000000000030FEEC string=0x000000000030FEF0 "`"
 *   insn=0x000000000030FEEC string=0x00000000001FA750 "0'"
 *   insn=0x000000000030FEFC string=0x000000000030FF00 "("
 *   insn=0x000000000030FF04 string=0x000000000030FF08 "i"
 *   insn=0x000000000030FF08 string=0x000000000030FF0C "?"
 *   insn=0x000000000030FF10 string=0x000000000030FF14 "*"
 *   insn=0x000000000030FF14 string=0x000000000030FF18 "_i"
 *   insn=0x000000000030FF1C string=0x000000000030FF20 ")"
 *   insn=0x000000000030FF20 string=0x000000000030FF24 "i"
 *   insn=0x000000000030FF28 string=0x000000000030FF2C ""
 *   insn=0x000000000030FF34 string=0x000000000030FF4C "h"
 *   insn=0x000000000030FF3C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030FF44 string=0x00000000001F3F20 "P'"
 *   insn=0x000000000030FF54 string=0x000000000030FF58 "\t"
 *   insn=0x000000000030FF5C string=0x000000000030FF60 ")"
 *   insn=0x000000000030FF60 string=0x000000000030FF64 ""
 *   insn=0x000000000030FF68 string=0x000000000030FF6C "h"
 *   insn=0x000000000030FF70 string=0x000000000030FFBC "h&G)\n"
 *   insn=0x000000000030FF80 string=0x000000000030FF84 "N"
 *   insn=0x000000000030FF9C string=0x000000000030FFA0 "L"
 *   insn=0x000000000030FFA0 string=0x000000000030FFA4 "@"
 *   insn=0x000000000030FFA0 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000030FFB0 string=0x000000000030FFB4 "'"
 *   insn=0x000000000030FFB4 string=0x000000000030FFB8 " "
 *   insn=0x000000000030FFB4 string=0x00000000001F9050 "0'"
 *   insn=0x000000000030FFBC string=0x000000000030FFC0 "\n"
 *   insn=0x000000000030FFC4 string=0x000000000030FFC8 "j:"
 *   insn=0x000000000030FFD4 string=0x000000000030FFD8 "j"
 *   insn=0x000000000030FFE4 string=0x000000000030FFE8 "B"
 *   insn=0x000000000030FFEC string=0x000000000030FFF0 "h"
 *   insn=0x000000000030FFF0 string=0x000000000030FFF4 "H"
 *   insn=0x0000000000310000 string=0x0000000000310004 "h:@"
 *   insn=0x0000000000310004 string=0x0000000000310008 ""
 *   insn=0x0000000000310008 string=0x000000000031000C "K"
 *   insn=0x000000000031000C string=0x0000000000310010 "h:"
 *   insn=0x000000000031000C string=0x0000000000310014 "h"
 *   insn=0x000000000031001C string=0x0000000000310020 "\t"
 *   insn=0x0000000000310020 string=0x0000000000310024 "?"
 *   insn=0x0000000000310024 string=0x0000000000310028 "!"
 *   insn=0x0000000000310028 string=0x000000000031002C ""
 *   insn=0x000000000031002C string=0x0000000000310030 "h"
 *   insn=0x000000000031004C string=0x0000000000310050 "("
 *   insn=0x0000000000310054 string=0x0000000000310058 "h"
 *   insn=0x000000000031005C string=0x0000000000310060 "b"
 *   insn=0x0000000000310060 string=0x0000000000310064 "\t"
 *   insn=0x0000000000310064 string=0x0000000000310068 "?"
 *   insn=0x000000000031006C string=0x0000000000310070 ""
 *   insn=0x0000000000310070 string=0x0000000000310074 "h"
 *   insn=0x0000000000310090 string=0x0000000000310094 "("
 *   insn=0x0000000000310098 string=0x000000000031009C "i"
 *   insn=0x000000000031009C string=0x00000000003100A0 "?"
 *   insn=0x00000000003100A0 string=0x00000000003100A4 "B\n"
 *   insn=0x00000000003100A4 string=0x00000000003100A8 "*"
 *   insn=0x00000000003100A8 string=0x00000000003100AC "_"
 *   insn=0x00000000003100B0 string=0x00000000003100B4 ")"
 *   insn=0x00000000003100B4 string=0x00000000003100B8 "i"
 *   insn=0x00000000003100BC string=0x00000000003100C0 ""
 *   insn=0x00000000003100C8 string=0x00000000003100E0 "h"
 *   insn=0x00000000003100CC string=0x00000000003100D0 "D"
 *   insn=0x00000000003100D8 string=0x00000000001FAF50 "0'"
 *   insn=0x00000000003100E8 string=0x00000000003100EC "\t"
 *   insn=0x00000000003100F0 string=0x00000000003100F4 ")"
 *   insn=0x00000000003100F4 string=0x00000000003100F8 ""
 *   insn=0x00000000003100FC string=0x0000000000310100 "h"
 *   insn=0x0000000000310104 string=0x0000000000310118 "h&G)\n"
 *   insn=0x0000000000310110 string=0x0000000000310114 "@"
 *   insn=0x0000000000310118 string=0x000000000031011C "\n"
 *   insn=0x0000000000310120 string=0x0000000000310124 "j:"
 *   insn=0x0000000000310144 string=0x00000000001F6150 "0'"
 *   insn=0x0000000000310148 string=0x000000000031014C "h"
 *   insn=0x000000000031014C string=0x0000000000310150 "h"
 *   insn=0x0000000000310158 string=0x000000000031015C "-"
 *   insn=0x000000000031015C string=0x0000000000310160 "h:@"
 *   insn=0x0000000000310160 string=0x0000000000310164 ""
 *   insn=0x0000000000310164 string=0x0000000000310168 "K"
 *   insn=0x0000000000310168 string=0x000000000031016C "h:"
 *   insn=0x0000000000310168 string=0x0000000000310170 "h"
 *   insn=0x0000000000310178 string=0x000000000031017C "\t"
 *   insn=0x000000000031017C string=0x0000000000310180 "?"
 *   insn=0x0000000000310180 string=0x0000000000310184 "A"
 *   insn=0x0000000000310184 string=0x0000000000310188 ""
 *   insn=0x0000000000310188 string=0x000000000031018C "h"
 *   insn=0x0000000000310194 string=0x0000000000310198 "n"
 *   insn=0x00000000003101A8 string=0x00000000003101AC "("
 *   insn=0x00000000003101B0 string=0x00000000003101B4 "h"
 *   insn=0x00000000003101BC string=0x00000000003101C0 "h.@"
 *   insn=0x00000000003101C0 string=0x00000000003101C4 "H"
 *   insn=0x00000000003101C4 string=0x00000000003101C8 " "
 *   insn=0x00000000003101D4 string=0x00000000003101D8 " "
 *   insn=0x00000000003101E4 string=0x00000000003101E8 """
 *   insn=0x00000000003101F0 string=0x00000000003101F4 "B"
 *   insn=0x00000000003101F4 string=0x00000000003101F8 "\t"
 *   insn=0x00000000003101F8 string=0x00000000003101FC "\t"
 *   insn=0x00000000003101FC string=0x0000000000310200 "!"
 *   insn=0x0000000000310200 string=0x0000000000310204 ""
 *   insn=0x0000000000310204 string=0x0000000000310208 "a""
 *   insn=0x0000000000310208 string=0x000000000031020C "h"
 *   insn=0x0000000000310228 string=0x000000000031022C "a"
 *   insn=0x000000000031024C string=0x0000000000310250 "`"
 *   insn=0x0000000000310258 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000310268 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LightComponent::MergePartialFromCodedStream(
        Caver::Proto::LightComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned int TagFallback; // w0
  unsigned __int64 v6; // x1
  int v7; // w8
  char *v8; // x9
  unsigned int v9; // w8
  int v10; // w9
  _BYTE *v11; // x8
  int v12; // w8
  int v13; // w9
  _BYTE *v14; // x9
  Caver::Proto::FloatColor *v15; // x21
  char *v16; // x8
  int v17; // w8
  int v18; // w8
  int v19; // w9
  int v20; // w22
  int v21; // w8
  bool v22; // vf
  int v23; // w8
  _BYTE *v24; // x8
  int v25; // w9
  _BYTE *v26; // x8
  int v27; // w9
  _BYTE *v28; // x9
  Caver::Proto::Vector3 *v29; // x21
  char *v30; // x8
  int v31; // w8
  int v32; // w9
  int v33; // w22
  int v34; // w8
  int v35; // w8
  _BYTE *v36; // x8
  int v37; // w9
  char *v38; // x8
  __int64 result; // x0
  unsigned int v40; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v41; // [xsp+8h] [xbp-38h]

  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
  {
    v38 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v38 >= *((_QWORD *)a2 + 2) || *v38 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v6 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v6 = (unsigned __int8)*v38;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v38 + 1;
      if ( !(_DWORD)v6 )
        return 1;
    }
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v7 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_33;
        v8 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v8 >= *((_QWORD *)a2 + 2) || *v8 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
            return 0;
          v9 = v40;
          if ( v40 > 4 )
            goto LABEL_9;
        }
        else
        {
          v9 = (unsigned __int8)*v8;
          v40 = v9;
          *((_QWORD *)a2 + 1) = v8 + 1;
          if ( v9 > 4 )
          {
LABEL_9:
            v11 = (_BYTE *)*((_QWORD *)a2 + 1);
            if ( (unsigned __int64)v11 < *((_QWORD *)a2 + 2) && *v11 == 21 )
            {
              *((_QWORD *)a2 + 1) = v11 + 1;
              goto LABEL_21;
            }
            continue;
          }
        }
        v10 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 3) = v9;
        *((_DWORD *)this + 14) = v10 | 1;
        goto LABEL_9;
      case 2u:
        v7 = v6 & 7;
        if ( v7 != 5 )
          goto LABEL_33;
LABEL_21:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v40) & 1) == 0 )
          return 0;
        v13 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 4) = v40;
        v12 = v13 | 2;
        *((_DWORD *)this + 14) = v13 | 2;
        v14 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_25:
        v15 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 14) = v12 | 4;
        if ( !v15 )
        {
          v15 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v15);
          *((_QWORD *)this + 3) = v15;
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
        v18 = *((_DWORD *)a2 + 14);
        v19 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v18 + 1;
        if ( v18 >= v19 )
          return 0;
        v20 = google::protobuf::io::CodedInputStream::PushLimit(a2, v40);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v15, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v20);
        v21 = *((_DWORD *)a2 + 14);
        v22 = __OFSUB__(v21, 1);
        v23 = v21 - 1;
        if ( v23 < 0 == v22 )
          *((_DWORD *)a2 + 14) = v23;
        v24 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v24 >= *((_QWORD *)a2 + 2) || *v24 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v24 + 1;
LABEL_45:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v40) & 1) == 0 )
          return 0;
        v25 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 8) = v40;
        *((_DWORD *)this + 14) = v25 | 8;
        v26 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v26 >= *((_QWORD *)a2 + 2) || *v26 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v26 + 1;
LABEL_49:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v40) & 1) == 0 )
          return 0;
        v27 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 9) = v40;
        v17 = v27 | 0x10;
        *((_DWORD *)this + 14) = v27 | 0x10;
        v28 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v28 >= *((_QWORD *)a2 + 2) || *v28 != 50 )
          continue;
        *((_QWORD *)a2 + 1) = v28 + 1;
LABEL_53:
        v29 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 6);
        *((_DWORD *)this + 14) = v17 | 0x40;
        if ( !v29 )
        {
          v29 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v29);
          *((_QWORD *)this + 6) = v29;
        }
        v30 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v30 >= *((_QWORD *)a2 + 2) || *v30 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
            return 0;
        }
        else
        {
          v40 = (unsigned __int8)*v30;
          *((_QWORD *)a2 + 1) = v30 + 1;
        }
        v31 = *((_DWORD *)a2 + 14);
        v32 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v31 + 1;
        if ( v31 >= v32 )
          return 0;
        v33 = google::protobuf::io::CodedInputStream::PushLimit(a2, v40);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v29, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v33);
        v34 = *((_DWORD *)a2 + 14);
        v22 = __OFSUB__(v34, 1);
        v35 = v34 - 1;
        if ( v35 < 0 == v22 )
          *((_DWORD *)a2 + 14) = v35;
        v36 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v36 >= *((_QWORD *)a2 + 2) || *v36 != 61 )
          continue;
        *((_QWORD *)a2 + 1) = v36 + 1;
LABEL_67:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v40) & 1) != 0 )
        {
          v37 = *((_DWORD *)this + 14);
          *((_DWORD *)this + 10) = v40;
          *((_DWORD *)this + 14) = v37 | 0x20;
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
        v7 = v6 & 7;
        if ( v7 != 2 )
          goto LABEL_33;
        v12 = *((_DWORD *)this + 14);
        goto LABEL_25;
      case 4u:
        v7 = v6 & 7;
        if ( v7 == 5 )
          goto LABEL_45;
        goto LABEL_33;
      case 5u:
        v7 = v6 & 7;
        if ( v7 == 5 )
          goto LABEL_49;
        goto LABEL_33;
      case 6u:
        v7 = v6 & 7;
        if ( v7 != 2 )
          goto LABEL_33;
        v17 = *((_DWORD *)this + 14);
        goto LABEL_53;
      case 7u:
        v7 = v6 & 7;
        if ( v7 == 5 )
          goto LABEL_67;
LABEL_33:
        if ( v7 == 4 )
          return 1;
LABEL_34:
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
        continue;
      default:
        if ( (v6 & 7) == 4 )
          return 1;
        goto LABEL_34;
    }
  }
}

