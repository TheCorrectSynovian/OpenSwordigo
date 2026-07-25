/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003321B4
 * Mangled: _ZN5Caver5Proto21PortalEffectComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::PortalEffectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000332574  Caver::Proto::PortalEffectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 120
 *   insn=0x00000000003321C8 string=0x00000000003321CC "W"
 *   insn=0x00000000003321E4 string=0x00000000003321E8 "h"
 *   insn=0x00000000003321EC string=0x00000000003321F0 """
 *   insn=0x00000000003321F0 string=0x00000000003321F4 "\t"
 *   insn=0x00000000003321F8 string=0x00000000003321FC "!"
 *   insn=0x00000000003321FC string=0x0000000000332200 ""
 *   insn=0x0000000000332200 string=0x0000000000332204 "a""
 *   insn=0x0000000000332204 string=0x0000000000332208 "h"
 *   insn=0x000000000033220C string=0x0000000000332228 "(|"
 *   insn=0x0000000000332214 string=0x0000000000332218 "\n"
 *   insn=0x0000000000332218 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000033221C string=0x0000000000332220 "a""
 *   insn=0x0000000000332220 string=0x0000000000332224 "A"
 *   insn=0x0000000000332228 string=0x000000000033222C ""
 *   insn=0x0000000000332234 string=0x0000000000332238 "{"
 *   insn=0x0000000000332234 string=0x00000000003322C8 "("
 *   insn=0x0000000000332238 string=0x000000000033223C ""
 *   insn=0x0000000000332240 string=0x0000000000332244 "("
 *   insn=0x0000000000332240 string=0x0000000000332274 "("
 *   insn=0x0000000000332240 string=0x0000000000332288 "("
 *   insn=0x0000000000332240 string=0x0000000000332298 "("
 *   insn=0x0000000000332244 string=0x0000000000332248 "!"
 *   insn=0x0000000000332248 string=0x000000000033224C "i"
 *   insn=0x000000000033224C string=0x0000000000332250 "?"
 *   insn=0x0000000000332254 string=0x0000000000332258 "*"
 *   insn=0x0000000000332258 string=0x000000000033225C "J"
 *   insn=0x000000000033225C string=0x0000000000332260 "J"
 *   insn=0x0000000000332260 string=0x0000000000332264 ")"
 *   insn=0x0000000000332268 string=0x000000000033226C "i"
 *   insn=0x000000000033226C string=0x0000000000332270 "#"
 *   insn=0x0000000000332280 string=0x0000000000332284 "<"
 *   insn=0x0000000000332290 string=0x0000000000332294 "m"
 *   insn=0x000000000033229C string=0x00000000003322A0 "i"
 *   insn=0x00000000003322A0 string=0x00000000003322A4 "?"
 *   insn=0x00000000003322A4 string=0x00000000003322A8 "B"
 *   insn=0x00000000003322A8 string=0x00000000003322AC "*"
 *   insn=0x00000000003322AC string=0x00000000003322B0 "\n"
 *   insn=0x00000000003322B0 string=0x00000000003322B4 "J"
 *   insn=0x00000000003322B4 string=0x00000000003322B8 ")"
 *   insn=0x00000000003322BC string=0x00000000003322C0 "i"
 *   insn=0x00000000003322C0 string=0x00000000003322C4 "!"
 *   insn=0x00000000003322D4 string=0x00000000003322D8 "~-"
 *   insn=0x00000000003322D8 string=0x00000000003322DC "`"
 *   insn=0x00000000003322D8 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003322E8 string=0x00000000003322EC "Y"
 *   insn=0x00000000003322EC string=0x00000000001F9050 "0'"
 *   insn=0x00000000003322F4 string=0x00000000003322F8 "i"
 *   insn=0x0000000000332300 string=0x0000000000332304 "?"
 *   insn=0x0000000000332304 string=0x0000000000332308 "j"
 *   insn=0x0000000000332310 string=0x0000000000332314 "*"
 *   insn=0x0000000000332314 string=0x0000000000332318 "_A"
 *   insn=0x0000000000332318 string=0x000000000033231C "a"
 *   insn=0x000000000033231C string=0x0000000000332320 ")"
 *   insn=0x0000000000332320 string=0x0000000000332324 "i"
 *   insn=0x0000000000332324 string=0x0000000000332328 "?"
 *   insn=0x0000000000332334 string=0x0000000000332338 "F"
 *   insn=0x0000000000332338 string=0x000000000033233C "@"
 *   insn=0x0000000000332340 string=0x0000000000332344 "i"
 *   insn=0x000000000033234C string=0x0000000000332350 "?"
 *   insn=0x0000000000332350 string=0x0000000000332354 "j"
 *   insn=0x0000000000332358 string=0x000000000033235C "b"
 *   insn=0x000000000033235C string=0x0000000000332360 "("
 *   insn=0x0000000000332368 string=0x000000000033236C "("
 *   insn=0x000000000033236C string=0x0000000000332370 "h"
 *   insn=0x0000000000332374 string=0x0000000000332378 "H"
 *   insn=0x0000000000332380 string=0x0000000000332398 "h"
 *   insn=0x0000000000332388 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000332390 string=0x00000000001F3F20 "P'"
 *   insn=0x00000000003323A0 string=0x00000000003323A4 "\t"
 *   insn=0x00000000003323A8 string=0x00000000003323AC ")"
 *   insn=0x00000000003323AC string=0x00000000003323B0 ""
 *   insn=0x00000000003323B4 string=0x00000000003323B8 "h"
 *   insn=0x00000000003323BC string=0x00000000003323D0 "h&G)\n"
 *   insn=0x00000000003323C4 string=0x00000000003323C8 """
 *   insn=0x00000000003323D0 string=0x00000000003323D4 "\n"
 *   insn=0x00000000003323D8 string=0x00000000003323DC "j:"
 *   insn=0x00000000003323DC string=0x00000000003323E0 "*\n"
 *   insn=0x00000000003323E8 string=0x00000000003323EC "eA"
 *   insn=0x00000000003323F8 string=0x00000000003323FC "=A"
 *   insn=0x00000000003323FC string=0x0000000000332400 " \t"
 *   insn=0x0000000000332400 string=0x0000000000332404 "h"
 *   insn=0x0000000000332414 string=0x0000000000332418 "h:@"
 *   insn=0x0000000000332418 string=0x000000000033241C ""
 *   insn=0x000000000033241C string=0x0000000000332420 "K"
 *   insn=0x0000000000332420 string=0x0000000000332424 "h:"
 *   insn=0x0000000000332420 string=0x0000000000332428 "h"
 *   insn=0x0000000000332430 string=0x0000000000332434 "\t"
 *   insn=0x0000000000332434 string=0x0000000000332438 "?"
 *   insn=0x0000000000332438 string=0x000000000033243C "a"
 *   insn=0x000000000033243C string=0x0000000000332440 ""
 *   insn=0x0000000000332440 string=0x0000000000332444 "h"
 *   insn=0x000000000033244C string=0x0000000000332450 ""
 *   insn=0x0000000000332458 string=0x0000000000332470 "h"
 *   insn=0x000000000033245C string=0x0000000000332460 "`"
 *   insn=0x0000000000332468 string=0x00000000001FAF50 "0'"
 *   insn=0x0000000000332478 string=0x000000000033247C "\t"
 *   insn=0x0000000000332480 string=0x0000000000332484 ")"
 *   insn=0x0000000000332484 string=0x0000000000332488 ""
 *   insn=0x000000000033248C string=0x0000000000332490 "h"
 *   insn=0x0000000000332494 string=0x00000000003324A8 "h&G)\n"
 *   insn=0x00000000003324A8 string=0x00000000003324AC "\n"
 *   insn=0x00000000003324B0 string=0x00000000003324B4 "j:"
 *   insn=0x00000000003324B4 string=0x00000000003324B8 "j"
 *   insn=0x00000000003324C0 string=0x00000000003324C4 "/A"
 *   insn=0x00000000003324D4 string=0x00000000003324D8 "`"
 *   insn=0x00000000003324D4 string=0x00000000001F6150 "0'"
 *   insn=0x00000000003324D8 string=0x00000000003324DC "h"
 *   insn=0x00000000003324DC string=0x00000000003324E0 "("
 *   insn=0x00000000003324E8 string=0x00000000003324EC "IB"
 *   insn=0x00000000003324EC string=0x00000000003324F0 "h:@"
 *   insn=0x00000000003324F0 string=0x00000000003324F4 ""
 *   insn=0x00000000003324F4 string=0x00000000003324F8 "K"
 *   insn=0x00000000003324F8 string=0x00000000003324FC "h:"
 *   insn=0x00000000003324F8 string=0x0000000000332500 "h"
 *   insn=0x0000000000332508 string=0x000000000033250C "h.@"
 *   insn=0x0000000000332518 string=0x000000000033251C "`"
 *   insn=0x000000000033253C string=0x0000000000332558 "^"
 *   insn=0x0000000000332558 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000332564 string=0x0000000000332568 "R"
 *   insn=0x0000000000332568 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalEffectComponent::MergePartialFromCodedStream(
        Caver::Proto::PortalEffectComponent *this,
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
  char *v14; // x9
  unsigned int v15; // w10
  _BYTE *v16; // x9
  int v17; // w11
  int v18; // w11
  Caver::Proto::FloatColor *v19; // x21
  char *v20; // x8
  int v21; // w8
  int v22; // w9
  int v23; // w22
  int v24; // w8
  bool v25; // vf
  int v26; // w8
  _BYTE *v27; // x8
  Caver::Proto::Vector3 *v28; // x21
  char *v29; // x8
  int v30; // w8
  int v31; // w9
  int v32; // w22
  int v33; // w8
  int v34; // w8
  __int64 result; // x0
  unsigned int v36; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v37; // [xsp+8h] [xbp-38h]

  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
          v11 = v36;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v36 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v17 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 10) = v17 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v14 = v12 + 1;
        *((_QWORD *)a2 + 1) = v14;
        if ( (unsigned __int64)v14 < v9 )
          goto LABEL_18;
        goto LABEL_29;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_21;
        v14 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v14 >= v9 )
          goto LABEL_29;
LABEL_18:
        if ( *v14 < 0 )
        {
LABEL_29:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
          v15 = v36;
          v16 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v15 = (unsigned __int8)*v14;
          v16 = v14 + 1;
          v36 = v15;
          *((_QWORD *)a2 + 1) = v16;
        }
        v18 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 4) = v15;
        v13 = v18 | 2;
        *((_DWORD *)this + 10) = v18 | 2;
        if ( (unsigned __int64)v16 >= v9 || *v16 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v16 + 1;
LABEL_34:
        v19 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 10) = v13 | 4;
        if ( !v19 )
        {
          v19 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v19);
          *((_QWORD *)this + 3) = v19;
        }
        v20 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v20 >= *((_QWORD *)a2 + 2) || *v20 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
        }
        else
        {
          v36 = (unsigned __int8)*v20;
          *((_QWORD *)a2 + 1) = v20 + 1;
        }
        v21 = *((_DWORD *)a2 + 14);
        v22 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v21 + 1;
        if ( v21 >= v22 )
          return 0;
        v23 = google::protobuf::io::CodedInputStream::PushLimit(a2, v36);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v19, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v23);
        v24 = *((_DWORD *)a2 + 14);
        v25 = __OFSUB__(v24, 1);
        v26 = v24 - 1;
        if ( v26 < 0 == v25 )
          *((_DWORD *)a2 + 14) = v26;
        v27 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v27 >= *((_QWORD *)a2 + 2) || *v27 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v27 + 1;
LABEL_48:
        v28 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 10) |= 8u;
        if ( !v28 )
        {
          v28 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v28);
          *((_QWORD *)this + 4) = v28;
        }
        v29 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v29 >= *((_QWORD *)a2 + 2) || *v29 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
        }
        else
        {
          v36 = (unsigned __int8)*v29;
          *((_QWORD *)a2 + 1) = v29 + 1;
        }
        v30 = *((_DWORD *)a2 + 14);
        v31 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v30 + 1;
        if ( v30 >= v31 )
          return 0;
        v32 = google::protobuf::io::CodedInputStream::PushLimit(a2, v36);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v28, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v32);
        v33 = *((_DWORD *)a2 + 14);
        v25 = __OFSUB__(v33, 1);
        v34 = v33 - 1;
        if ( v34 < 0 == v25 )
          *((_DWORD *)a2 + 14) = v34;
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
          goto LABEL_21;
        v13 = *((_DWORD *)this + 10);
        goto LABEL_34;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_48;
        goto LABEL_21;
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

