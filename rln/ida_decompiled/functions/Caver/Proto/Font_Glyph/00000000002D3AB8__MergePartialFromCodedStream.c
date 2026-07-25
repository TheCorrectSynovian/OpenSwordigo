/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D3AB8
 * Mangled: _ZN5Caver5Proto10Font_Glyph27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Font_Glyph::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x0000000000201AA0  Caver::Proto::Font_Glyph::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F9860  Caver::Proto::Rectangle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 111
 *   insn=0x00000000002D3AD0 string=0x00000000002D3AD4 "W"
 *   insn=0x00000000002D3ADC string=0x00000000002D3AE0 "9"
 *   insn=0x00000000002D3AF0 string=0x00000000002D3AF4 ":C"
 *   insn=0x00000000002D3AF8 string=0x00000000002D3AFC "h"
 *   insn=0x00000000002D3B00 string=0x00000000002D3B04 """
 *   insn=0x00000000002D3B04 string=0x00000000002D3B08 "\t"
 *   insn=0x00000000002D3B0C string=0x00000000002D3B10 "!"
 *   insn=0x00000000002D3B10 string=0x00000000002D3B14 ""
 *   insn=0x00000000002D3B14 string=0x00000000002D3B18 "a""
 *   insn=0x00000000002D3B18 string=0x00000000002D3B1C "h"
 *   insn=0x00000000002D3B20 string=0x00000000002D3B3C "(|"
 *   insn=0x00000000002D3B2C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D3B30 string=0x00000000002D3B34 "a""
 *   insn=0x00000000002D3B3C string=0x00000000002D3B40 ""
 *   insn=0x00000000002D3B48 string=0x00000000002D3B4C "{"
 *   insn=0x00000000002D3B48 string=0x00000000002D3BE0 "("
 *   insn=0x00000000002D3B4C string=0x00000000002D3B50 ""
 *   insn=0x00000000002D3B54 string=0x00000000002D3B58 "("
 *   insn=0x00000000002D3B54 string=0x00000000002D3B88 "("
 *   insn=0x00000000002D3B54 string=0x00000000002D3BB8 "("
 *   insn=0x00000000002D3B54 string=0x00000000002D3BCC "("
 *   insn=0x00000000002D3B58 string=0x00000000002D3B5C "A"
 *   insn=0x00000000002D3B5C string=0x00000000002D3B60 "i"
 *   insn=0x00000000002D3B60 string=0x00000000002D3B64 "?"
 *   insn=0x00000000002D3B68 string=0x00000000002D3B6C "*"
 *   insn=0x00000000002D3B6C string=0x00000000002D3B70 "j"
 *   insn=0x00000000002D3B70 string=0x00000000002D3B74 "J"
 *   insn=0x00000000002D3B74 string=0x00000000002D3B78 ")"
 *   insn=0x00000000002D3B7C string=0x00000000002D3B80 "i"
 *   insn=0x00000000002D3B80 string=0x00000000002D3B84 "$"
 *   insn=0x00000000002D3B8C string=0x00000000002D3B90 "i"
 *   insn=0x00000000002D3B90 string=0x00000000002D3B94 "?"
 *   insn=0x00000000002D3B94 string=0x00000000002D3B98 "B"
 *   insn=0x00000000002D3B98 string=0x00000000002D3B9C "*"
 *   insn=0x00000000002D3B9C string=0x00000000002D3BA0 "\n"
 *   insn=0x00000000002D3BA0 string=0x00000000002D3BA4 "J"
 *   insn=0x00000000002D3BA4 string=0x00000000002D3BA8 ")"
 *   insn=0x00000000002D3BAC string=0x00000000002D3BB0 "i"
 *   insn=0x00000000002D3BB0 string=0x00000000002D3BB4 "a"
 *   insn=0x00000000002D3BBC string=0x00000000002D3BC0 "!"
 *   insn=0x00000000002D3BC4 string=0x00000000002D3BC8 "g"
 *   insn=0x00000000002D3BE4 string=0x00000000002D3BE8 " "
 *   insn=0x00000000002D3BEC string=0x00000000002D3BF0 "8"
 *   insn=0x00000000002D3BF0 string=0x00000000002D3BF4 "@"
 *   insn=0x00000000002D3BF0 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D3C04 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002D3C0C string=0x00000000002D3C10 "i"
 *   insn=0x00000000002D3C18 string=0x00000000002D3C1C "?"
 *   insn=0x00000000002D3C1C string=0x00000000002D3C20 "j"
 *   insn=0x00000000002D3C28 string=0x00000000002D3C2C "("
 *   insn=0x00000000002D3C30 string=0x00000000002D3C34 "A"
 *   insn=0x00000000002D3C34 string=0x00000000002D3C38 "("
 *   insn=0x00000000002D3C38 string=0x00000000002D3C3C "h"
 *   insn=0x00000000002D3C40 string=0x00000000002D3C44 "H"
 *   insn=0x00000000002D3C4C string=0x00000000002D3C68 "h"
 *   insn=0x00000000002D3C50 string=0x00000000002D3C54 "c"
 *   insn=0x00000000002D3C54 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D3C70 string=0x00000000002D3C74 "\t"
 *   insn=0x00000000002D3C78 string=0x00000000002D3C7C ")"
 *   insn=0x00000000002D3C7C string=0x00000000002D3C80 ""
 *   insn=0x00000000002D3C84 string=0x00000000002D3C88 "h"
 *   insn=0x00000000002D3C8C string=0x00000000002D3CA0 "h&G)\n"
 *   insn=0x00000000002D3C98 string=0x00000000002D3C9C "@"
 *   insn=0x00000000002D3CA0 string=0x00000000002D3CA4 "\n"
 *   insn=0x00000000002D3CA8 string=0x00000000002D3CAC "j:"
 *   insn=0x00000000002D3CB8 string=0x00000000002D3CBC "1"
 *   insn=0x00000000002D3CCC string=0x00000000001F9860 "0'"
 *   insn=0x00000000002D3CD0 string=0x00000000002D3CD4 "h"
 *   insn=0x00000000002D3CD4 string=0x00000000002D3CD8 "h"
 *   insn=0x00000000002D3CE0 string=0x00000000002D3CE4 "K"
 *   insn=0x00000000002D3CE4 string=0x00000000002D3CE8 "h:@"
 *   insn=0x00000000002D3CE8 string=0x00000000002D3CEC ""
 *   insn=0x00000000002D3CEC string=0x00000000002D3CF0 "K"
 *   insn=0x00000000002D3CF0 string=0x00000000002D3CF4 "h:"
 *   insn=0x00000000002D3CF0 string=0x00000000002D3CF8 "i"
 *   insn=0x00000000002D3CF8 string=0x00000000002D3CFC "?"
 *   insn=0x00000000002D3D00 string=0x00000000002D3D04 "*"
 *   insn=0x00000000002D3D04 string=0x00000000002D3D08 "_a"
 *   insn=0x00000000002D3D0C string=0x00000000002D3D10 ")"
 *   insn=0x00000000002D3D10 string=0x00000000002D3D14 "i"
 *   insn=0x00000000002D3D14 string=0x00000000002D3D18 "?"
 *   insn=0x00000000002D3D30 string=0x00000000002D3D34 "i"
 *   insn=0x00000000002D3D3C string=0x00000000002D3D40 "?"
 *   insn=0x00000000002D3D40 string=0x00000000002D3D44 "j"
 *   insn=0x00000000002D3D4C string=0x00000000002D3D50 "("
 *   insn=0x00000000002D3D54 string=0x00000000002D3D58 "!"
 *   insn=0x00000000002D3D58 string=0x00000000002D3D5C "("
 *   insn=0x00000000002D3D5C string=0x00000000002D3D60 "h"
 *   insn=0x00000000002D3D64 string=0x00000000002D3D68 "H"
 *   insn=0x00000000002D3D70 string=0x00000000002D3D90 "h"
 *   insn=0x00000000002D3D7C string=0x00000000002D3D80 "(C"
 *   insn=0x00000000002D3D98 string=0x00000000002D3D9C "\t"
 *   insn=0x00000000002D3DA0 string=0x00000000002D3DA4 ")"
 *   insn=0x00000000002D3DA4 string=0x00000000002D3DA8 ""
 *   insn=0x00000000002D3DAC string=0x00000000002D3DB0 "h"
 *   insn=0x00000000002D3DB4 string=0x00000000002D3DC8 "h&G)\n"
 *   insn=0x00000000002D3DC8 string=0x00000000002D3DCC "\n"
 *   insn=0x00000000002D3DD0 string=0x00000000002D3DD4 "j:"
 *   insn=0x00000000002D3DD4 string=0x00000000002D3DD8 "j"
 *   insn=0x00000000002D3DF4 string=0x00000000002D3DF8 "`"
 *   insn=0x00000000002D3DF8 string=0x00000000002D3DFC "h"
 *   insn=0x00000000002D3DFC string=0x00000000002D3E00 "("
 *   insn=0x00000000002D3E0C string=0x00000000002D3E10 "h:@"
 *   insn=0x00000000002D3E10 string=0x00000000002D3E14 ""
 *   insn=0x00000000002D3E14 string=0x00000000002D3E18 "K"
 *   insn=0x00000000002D3E18 string=0x00000000002D3E1C "h:"
 *   insn=0x00000000002D3E18 string=0x00000000002D3E20 "h"
 *   insn=0x00000000002D3E28 string=0x00000000002D3E2C "h.@"
 *   insn=0x00000000002D3E2C string=0x00000000002D3E30 "h"
 *   insn=0x00000000002D3E38 string=0x00000000002D3E3C "`"
 *   insn=0x00000000002D3E7C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font_Glyph::MergePartialFromCodedStream(
        Caver::Proto::Font_Glyph *this,
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
  unsigned __int64 v13; // x8
  char *v14; // x9
  unsigned int v15; // w10
  _BYTE *v16; // x9
  int v17; // w10
  int v18; // w10
  int v19; // w11
  Caver::Proto::Rectangle *v20; // x21
  char *v21; // x8
  int v22; // w8
  int v23; // w9
  int v24; // w22
  int v25; // w8
  bool v26; // vf
  int v27; // w8
  _BYTE *v28; // x9
  int v29; // w11
  Caver::Proto::Rectangle *v30; // x21
  char *v31; // x8
  int v32; // w8
  int v33; // w9
  int v34; // w22
  int v35; // w8
  int v36; // w8
  __int64 result; // x0
  unsigned int v38; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v39; // [xsp+8h] [xbp-48h]

  v39 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
        if ( (v6 & 7) != 0 )
          goto LABEL_21;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v38) & 1) == 0 )
            return 0;
          v11 = v38;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v38 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v19 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 3) = v11;
        v18 = v19 | 1;
        *((_DWORD *)this + 10) = v19 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
        goto LABEL_29;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_21;
        v18 = *((_DWORD *)this + 10);
LABEL_29:
        v20 = (Caver::Proto::Rectangle *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 10) = v18 | 2;
        if ( !v20 )
        {
          v20 = (Caver::Proto::Rectangle *)operator new(0x20u);
          *((_QWORD *)v20 + 2) = 0;
          *((_QWORD *)v20 + 3) = 0;
          *(_QWORD *)v20 = off_6C5AF8;
          *((_QWORD *)v20 + 1) = 0;
          *((_QWORD *)this + 2) = v20;
        }
        v21 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v21 >= *((_QWORD *)a2 + 2) || *v21 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v38) & 1) == 0 )
            return 0;
        }
        else
        {
          v38 = (unsigned __int8)*v21;
          *((_QWORD *)a2 + 1) = v21 + 1;
        }
        v22 = *((_DWORD *)a2 + 14);
        v23 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v22 + 1;
        if ( v22 >= v23 )
          return 0;
        v24 = google::protobuf::io::CodedInputStream::PushLimit(a2, v38);
        if ( (Caver::Proto::Rectangle::MergePartialFromCodedStream(v20, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v24);
        v25 = *((_DWORD *)a2 + 14);
        v26 = __OFSUB__(v25, 1);
        v27 = v25 - 1;
        if ( v27 < 0 == v26 )
          *((_DWORD *)a2 + 14) = v27;
        v28 = (_BYTE *)*((_QWORD *)a2 + 1);
        v13 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v28 >= v13 || *v28 != 24 )
          continue;
        v14 = v28 + 1;
        *((_QWORD *)a2 + 1) = v14;
        if ( (unsigned __int64)v14 >= v13 )
          goto LABEL_43;
LABEL_14:
        if ( *v14 < 0 )
        {
LABEL_43:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v38) & 1) == 0 )
            return 0;
          v15 = v38;
          v16 = (_BYTE *)*((_QWORD *)a2 + 1);
          v13 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v15 = (unsigned __int8)*v14;
          v16 = v14 + 1;
          v38 = v15;
          *((_QWORD *)a2 + 1) = v16;
        }
        v29 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 6) = v15;
        v17 = v29 | 4;
        *((_DWORD *)this + 10) = v29 | 4;
        if ( (unsigned __int64)v16 >= v13 || *v16 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v16 + 1;
LABEL_48:
        v30 = (Caver::Proto::Rectangle *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 10) = v17 | 8;
        if ( !v30 )
        {
          v30 = (Caver::Proto::Rectangle *)operator new(0x20u);
          *((_QWORD *)v30 + 2) = 0;
          *((_QWORD *)v30 + 3) = 0;
          *(_QWORD *)v30 = off_6C5AF8;
          *((_QWORD *)v30 + 1) = 0;
          *((_QWORD *)this + 4) = v30;
        }
        v31 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v31 >= *((_QWORD *)a2 + 2) || *v31 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v38) & 1) == 0 )
            return 0;
        }
        else
        {
          v38 = (unsigned __int8)*v31;
          *((_QWORD *)a2 + 1) = v31 + 1;
        }
        v32 = *((_DWORD *)a2 + 14);
        v33 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v32 + 1;
        if ( v32 >= v33 )
          return 0;
        v34 = google::protobuf::io::CodedInputStream::PushLimit(a2, v38);
        if ( (Caver::Proto::Rectangle::MergePartialFromCodedStream(v30, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v34);
        v35 = *((_DWORD *)a2 + 14);
        v26 = __OFSUB__(v35, 1);
        v36 = v35 - 1;
        if ( v36 < 0 == v26 )
          *((_DWORD *)a2 + 14) = v36;
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
        if ( (v6 & 7) != 0 )
          goto LABEL_21;
        v14 = (char *)*((_QWORD *)a2 + 1);
        v13 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v14 < v13 )
          goto LABEL_14;
        goto LABEL_43;
      case 4u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_21;
        v17 = *((_DWORD *)this + 10);
        goto LABEL_48;
      default:
        v8 = v6 & 7;
LABEL_21:
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

