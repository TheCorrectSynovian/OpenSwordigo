/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032BF78
 * Mangled: _ZN5Caver5Proto19WeaponGlowComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::WeaponGlowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 *   0x000000000032C310  Caver::Proto::WeaponGlowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 103
 *   insn=0x000000000032BF8C string=0x000000000032BF90 "W"
 *   insn=0x000000000032BF98 string=0x000000000058B8D4 "4"
 *   insn=0x000000000032BFA8 string=0x000000000032BFAC "h"
 *   insn=0x000000000032BFB0 string=0x000000000032BFB4 """
 *   insn=0x000000000032BFB4 string=0x000000000032BFB8 "\t"
 *   insn=0x000000000032BFBC string=0x000000000032BFC0 "!"
 *   insn=0x000000000032BFC0 string=0x000000000032BFC4 ""
 *   insn=0x000000000032BFC4 string=0x000000000032BFC8 "a""
 *   insn=0x000000000032BFC8 string=0x000000000032BFCC "h"
 *   insn=0x000000000032BFD0 string=0x000000000032BFEC "(|"
 *   insn=0x000000000032BFDC string=0x00000000001F7A40 "0'"
 *   insn=0x000000000032BFE0 string=0x000000000032BFE4 "a""
 *   insn=0x000000000032BFEC string=0x000000000032BFF0 ""
 *   insn=0x000000000032BFF8 string=0x000000000032BFFC "{"
 *   insn=0x000000000032BFF8 string=0x000000000032C06C "("
 *   insn=0x000000000032BFFC string=0x000000000032C000 ""
 *   insn=0x000000000032C004 string=0x000000000032C008 "("
 *   insn=0x000000000032C004 string=0x000000000032C038 "("
 *   insn=0x000000000032C004 string=0x000000000032C048 "("
 *   insn=0x000000000032C004 string=0x000000000032C058 "("
 *   insn=0x000000000032C008 string=0x000000000032C00C "!"
 *   insn=0x000000000032C00C string=0x000000000032C010 "i"
 *   insn=0x000000000032C010 string=0x000000000032C014 "?"
 *   insn=0x000000000032C018 string=0x000000000032C01C "*"
 *   insn=0x000000000032C01C string=0x000000000032C020 "J"
 *   insn=0x000000000032C020 string=0x000000000032C024 "J"
 *   insn=0x000000000032C024 string=0x000000000032C028 ")"
 *   insn=0x000000000032C02C string=0x000000000032C030 "i"
 *   insn=0x000000000032C030 string=0x000000000032C034 ""
 *   insn=0x000000000032C040 string=0x000000000032C044 "W"
 *   insn=0x000000000032C07C string=0x000000000032C080 "`"
 *   insn=0x000000000032C07C string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000032C090 string=0x000000000032C094 "`"
 *   insn=0x000000000032C090 string=0x00000000001F9050 "0'"
 *   insn=0x000000000032C098 string=0x000000000032C09C "i"
 *   insn=0x000000000032C0A4 string=0x000000000032C0A8 "?"
 *   insn=0x000000000032C0A8 string=0x000000000032C0AC "j"
 *   insn=0x000000000032C0B4 string=0x000000000032C0B8 "("
 *   insn=0x000000000032C0BC string=0x000000000032C0C0 "a"
 *   insn=0x000000000032C0C0 string=0x000000000032C0C4 "("
 *   insn=0x000000000032C0C4 string=0x000000000032C0C8 "h"
 *   insn=0x000000000032C0CC string=0x000000000032C0D0 "H"
 *   insn=0x000000000032C0D8 string=0x000000000032C0F0 "h"
 *   insn=0x000000000032C0DC string=0x000000000032C0E0 "@%"
 *   insn=0x000000000032C0E0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032C0E8 string=0x00000000001F3F20 "P'"
 *   insn=0x000000000032C0F8 string=0x000000000032C0FC "\t"
 *   insn=0x000000000032C100 string=0x000000000032C104 ")"
 *   insn=0x000000000032C104 string=0x000000000032C108 ""
 *   insn=0x000000000032C10C string=0x000000000032C110 "h"
 *   insn=0x000000000032C114 string=0x000000000032C128 "h&G)\n"
 *   insn=0x000000000032C128 string=0x000000000032C12C "\n"
 *   insn=0x000000000032C130 string=0x000000000032C134 "j:"
 *   insn=0x000000000032C134 string=0x000000000032C138 "J"
 *   insn=0x000000000032C154 string=0x000000000032C158 "@"
 *   insn=0x000000000032C158 string=0x000000000032C15C "h"
 *   insn=0x000000000032C15C string=0x000000000032C160 ""
 *   insn=0x000000000032C168 string=0x000000000032C16C ")["
 *   insn=0x000000000032C16C string=0x000000000032C170 "h:@"
 *   insn=0x000000000032C170 string=0x000000000032C174 ""
 *   insn=0x000000000032C174 string=0x000000000032C178 "K"
 *   insn=0x000000000032C178 string=0x000000000032C17C "h:"
 *   insn=0x000000000032C178 string=0x000000000032C180 "h"
 *   insn=0x000000000032C184 string=0x000000000032C188 """
 *   insn=0x000000000032C188 string=0x000000000032C18C "\t"
 *   insn=0x000000000032C18C string=0x000000000032C190 "?i"
 *   insn=0x000000000032C194 string=0x000000000032C198 ""
 *   insn=0x000000000032C198 string=0x000000000032C19C "h"
 *   insn=0x000000000032C1A4 string=0x000000000032C1A8 ""
 *   insn=0x000000000032C1B0 string=0x000000000032C1C8 "h"
 *   insn=0x000000000032C1B4 string=0x000000000032C1B8 "\n%"
 *   insn=0x000000000032C1BC string=0x000000000032C1C0 "X"
 *   insn=0x000000000032C1D0 string=0x000000000032C1D4 "\t"
 *   insn=0x000000000032C1D8 string=0x000000000032C1DC ")"
 *   insn=0x000000000032C1DC string=0x000000000032C1E0 ""
 *   insn=0x000000000032C1E4 string=0x000000000032C1E8 "h"
 *   insn=0x000000000032C1EC string=0x000000000032C200 "h&G)\n"
 *   insn=0x000000000032C1F8 string=0x000000000032C1FC " "
 *   insn=0x000000000032C200 string=0x000000000032C204 "\n"
 *   insn=0x000000000032C208 string=0x000000000032C20C "j:"
 *   insn=0x000000000032C230 string=0x000000000032C234 "h"
 *   insn=0x000000000032C234 string=0x000000000032C238 "H"
 *   insn=0x000000000032C244 string=0x000000000032C248 "h:@"
 *   insn=0x000000000032C248 string=0x000000000032C24C ""
 *   insn=0x000000000032C24C string=0x000000000032C250 "K"
 *   insn=0x000000000032C250 string=0x000000000032C254 "h:"
 *   insn=0x000000000032C250 string=0x000000000032C258 "h"
 *   insn=0x000000000032C25C string=0x000000000032C260 "b"
 *   insn=0x000000000032C260 string=0x000000000032C264 "\t"
 *   insn=0x000000000032C264 string=0x000000000032C268 "?"
 *   insn=0x000000000032C26C string=0x000000000032C270 ""
 *   insn=0x000000000032C270 string=0x000000000032C274 "h"
 *   insn=0x000000000032C27C string=0x000000000032C280 "49"
 *   insn=0x000000000032C280 string=0x00000000001FA750 "0'"
 *   insn=0x000000000032C290 string=0x000000000032C294 "("
 *   insn=0x000000000032C298 string=0x000000000032C29C "h"
 *   insn=0x000000000032C2A0 string=0x000000000032C2A4 "A"
 *   insn=0x000000000032C2A4 string=0x000000000032C2A8 "h.@"
 *   insn=0x000000000032C2A8 string=0x000000000032C2AC ""
 *   insn=0x000000000032C2B4 string=0x000000000032C2B8 "`"
 *   insn=0x000000000032C2F4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032C304 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032C308 string=0x000000000032C30C "nU\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponGlowComponent::MergePartialFromCodedStream(
        Caver::Proto::WeaponGlowComponent *this,
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
  int v13; // w10
  int v14; // w11
  Caver::Proto::FloatColor *v15; // x21
  char *v16; // x8
  int v17; // w8
  int v18; // w9
  int v19; // w22
  int v20; // w8
  bool v21; // vf
  int v22; // w8
  _BYTE *v23; // x8
  Caver::Proto::FloatColor *v24; // x21
  char *v25; // x8
  int v26; // w8
  int v27; // w9
  int v28; // w22
  int v29; // w8
  int v30; // w8
  _BYTE *v31; // x8
  int v32; // w9
  __int64 result; // x0
  unsigned int v34; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v35; // [xsp+8h] [xbp-38h]

  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_19;
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
        v14 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 3) = v11;
        v13 = v14 | 1;
        *((_DWORD *)this + 9) = v14 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
        goto LABEL_27;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_19;
        v13 = *((_DWORD *)this + 9);
LABEL_27:
        v15 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 9) = v13 | 2;
        if ( !v15 )
        {
          v15 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v15);
          *((_QWORD *)this + 2) = v15;
        }
        v16 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 2) || *v16 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
            return 0;
        }
        else
        {
          v34 = (unsigned __int8)*v16;
          *((_QWORD *)a2 + 1) = v16 + 1;
        }
        v17 = *((_DWORD *)a2 + 14);
        v18 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v17 + 1;
        if ( v17 >= v18 )
          return 0;
        v19 = google::protobuf::io::CodedInputStream::PushLimit(a2, v34);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v15, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v19);
        v20 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v20, 1);
        v22 = v20 - 1;
        if ( v22 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v22;
        v23 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) || *v23 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v23 + 1;
LABEL_41:
        v24 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 9) |= 4u;
        if ( !v24 )
        {
          v24 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v24);
          *((_QWORD *)this + 3) = v24;
        }
        v25 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v25 >= *((_QWORD *)a2 + 2) || *v25 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
            return 0;
        }
        else
        {
          v34 = (unsigned __int8)*v25;
          *((_QWORD *)a2 + 1) = v25 + 1;
        }
        v26 = *((_DWORD *)a2 + 14);
        v27 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v26 + 1;
        if ( v26 >= v27 )
          return 0;
        v28 = google::protobuf::io::CodedInputStream::PushLimit(a2, v34);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v24, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v28);
        v29 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v29, 1);
        v30 = v29 - 1;
        if ( v30 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v30;
        v31 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v31 >= *((_QWORD *)a2 + 2) || *v31 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v31 + 1;
LABEL_55:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v34) & 1) == 0 )
          return 0;
        v32 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 8) = v34;
        *((_DWORD *)this + 9) = v32 | 8;
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
        if ( v8 == 2 )
          goto LABEL_41;
        goto LABEL_19;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_55;
        goto LABEL_19;
      default:
        v8 = v6 & 7;
LABEL_19:
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

