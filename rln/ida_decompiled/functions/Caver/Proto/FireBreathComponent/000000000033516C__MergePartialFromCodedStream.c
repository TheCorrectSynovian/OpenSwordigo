/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033516C
 * Mangled: _ZN5Caver5Proto19FireBreathComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::FireBreathComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000335438  Caver::Proto::FireBreathComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 79
 *   insn=0x0000000000335180 string=0x0000000000335184 "W"
 *   insn=0x0000000000335194 string=0x0000000000335198 "h"
 *   insn=0x000000000033519C string=0x00000000003351A0 """
 *   insn=0x00000000003351A0 string=0x00000000003351A4 "\t"
 *   insn=0x00000000003351A8 string=0x00000000003351AC "!"
 *   insn=0x00000000003351AC string=0x00000000003351B0 ""
 *   insn=0x00000000003351B0 string=0x00000000003351B4 "a""
 *   insn=0x00000000003351B4 string=0x00000000003351B8 "h"
 *   insn=0x00000000003351BC string=0x00000000003351D8 "(|"
 *   insn=0x00000000003351C8 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003351CC string=0x00000000003351D0 "a""
 *   insn=0x00000000003351E0 string=0x0000000000335238 "("
 *   insn=0x00000000003351E8 string=0x0000000000335208 "("
 *   insn=0x00000000003351F0 string=0x00000000003351F4 "("
 *   insn=0x00000000003351F0 string=0x0000000000335268 "("
 *   insn=0x0000000000335200 string=0x0000000000335204 "D"
 *   insn=0x000000000033520C string=0x0000000000335210 "i"
 *   insn=0x0000000000335210 string=0x0000000000335214 "?"
 *   insn=0x0000000000335218 string=0x000000000033521C "*"
 *   insn=0x0000000000335220 string=0x0000000000335224 "J"
 *   insn=0x0000000000335224 string=0x0000000000335228 ")"
 *   insn=0x000000000033522C string=0x0000000000335230 "i"
 *   insn=0x0000000000335230 string=0x0000000000335234 "-"
 *   insn=0x000000000033523C string=0x0000000000335240 "i"
 *   insn=0x0000000000335240 string=0x0000000000335244 "?"
 *   insn=0x0000000000335248 string=0x000000000033524C "*"
 *   insn=0x0000000000335250 string=0x0000000000335254 "J"
 *   insn=0x0000000000335254 string=0x0000000000335258 ")"
 *   insn=0x000000000033525C string=0x0000000000335260 "i"
 *   insn=0x0000000000335278 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000033527C string=0x0000000000335280 "]"
 *   insn=0x0000000000335288 string=0x000000000033528C "q"
 *   insn=0x000000000033528C string=0x0000000000335290 " "
 *   insn=0x000000000033528C string=0x00000000001F9050 "0'"
 *   insn=0x0000000000335294 string=0x0000000000335298 "i"
 *   insn=0x00000000003352A0 string=0x00000000003352A4 "?"
 *   insn=0x00000000003352A4 string=0x00000000003352A8 "j"
 *   insn=0x00000000003352AC string=0x00000000003352B0 "B"
 *   insn=0x00000000003352B0 string=0x00000000003352B4 "*"
 *   insn=0x00000000003352B4 string=0x00000000003352B8 "_A"
 *   insn=0x00000000003352BC string=0x00000000003352C0 ")"
 *   insn=0x00000000003352C0 string=0x00000000003352C4 "i"
 *   insn=0x00000000003352C4 string=0x00000000003352C8 "?"
 *   insn=0x00000000003352D4 string=0x00000000003352D8 "^"
 *   insn=0x00000000003352E0 string=0x00000000003352E4 "i"
 *   insn=0x00000000003352EC string=0x00000000003352F0 "?"
 *   insn=0x00000000003352F0 string=0x00000000003352F4 "j"
 *   insn=0x00000000003352FC string=0x0000000000335300 "("
 *   insn=0x0000000000335308 string=0x000000000033530C "("
 *   insn=0x000000000033530C string=0x0000000000335310 "h"
 *   insn=0x0000000000335314 string=0x0000000000335318 "H"
 *   insn=0x0000000000335320 string=0x0000000000335338 "h"
 *   insn=0x0000000000335328 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000335330 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000335340 string=0x0000000000335344 "\t"
 *   insn=0x0000000000335348 string=0x000000000033534C ")"
 *   insn=0x000000000033534C string=0x0000000000335350 ""
 *   insn=0x0000000000335354 string=0x0000000000335358 "h"
 *   insn=0x000000000033535C string=0x0000000000335370 "h&G)\n"
 *   insn=0x0000000000335364 string=0x0000000000335368 ":"
 *   insn=0x0000000000335368 string=0x000000000033536C "@"
 *   insn=0x0000000000335370 string=0x0000000000335374 "\n"
 *   insn=0x0000000000335378 string=0x000000000033537C "j:"
 *   insn=0x0000000000335388 string=0x000000000033538C "}5"
 *   insn=0x0000000000335398 string=0x000000000033539C "U5"
 *   insn=0x00000000003353A0 string=0x00000000003353A4 "h"
 *   insn=0x00000000003353A4 string=0x00000000003353A8 "h"
 *   insn=0x00000000003353B4 string=0x00000000003353B8 "h:@"
 *   insn=0x00000000003353B8 string=0x00000000003353BC ""
 *   insn=0x00000000003353BC string=0x00000000003353C0 "K"
 *   insn=0x00000000003353C0 string=0x00000000003353C4 "h:"
 *   insn=0x00000000003353C0 string=0x00000000003353C8 "h"
 *   insn=0x00000000003353CC string=0x00000000003353D0 "A"
 *   insn=0x00000000003353D0 string=0x00000000003353D4 "h.@"
 *   insn=0x00000000003353D4 string=0x00000000003353D8 ""
 *   insn=0x00000000003353E0 string=0x00000000003353E4 "`"
 *   insn=0x0000000000335420 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033542C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000335430 string=0x0000000000335434 "$1\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireBreathComponent::MergePartialFromCodedStream(
        Caver::Proto::FireBreathComponent *this,
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
  char *v15; // x9
  unsigned int v16; // w10
  _BYTE *v17; // x9
  int v18; // w11
  int v19; // w11
  Caver::Proto::FloatColor *v20; // x21
  char *v21; // x8
  int v22; // w8
  int v23; // w9
  int v24; // w22
  int v25; // w8
  bool v26; // vf
  int v27; // w8
  __int64 result; // x0
  unsigned int v29; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v30; // [xsp+8h] [xbp-38h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    do
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
            goto LABEL_21;
          v15 = (char *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
          if ( (unsigned __int64)v15 >= v11 || *v15 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v29) & 1) == 0 )
              return 0;
            v16 = v29;
            v17 = (_BYTE *)*((_QWORD *)a2 + 1);
            v11 = *((_QWORD *)a2 + 2);
          }
          else
          {
            v16 = (unsigned __int8)*v15;
            v17 = v15 + 1;
            v29 = v16;
            *((_QWORD *)a2 + 1) = v17;
          }
          v18 = *((_DWORD *)this + 8);
          *((_DWORD *)this + 3) = v16;
          *((_DWORD *)this + 8) = v18 | 1;
          if ( (unsigned __int64)v17 < v11 && *v17 == 16 )
          {
            v12 = v17 + 1;
            *((_QWORD *)a2 + 1) = v12;
            if ( (unsigned __int64)v12 >= v11 )
              goto LABEL_29;
            goto LABEL_14;
          }
        }
        if ( v8 == 2 )
          break;
        if ( v8 == 3 )
        {
          v9 = v6 & 7;
          if ( v9 == 2 )
          {
            v10 = *((_DWORD *)this + 8);
            goto LABEL_34;
          }
        }
        else
        {
          v9 = v6 & 7;
        }
LABEL_21:
        if ( v9 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
      }
      v9 = v6 & 7;
      if ( (v6 & 7) != 0 )
        goto LABEL_21;
      v12 = (char *)*((_QWORD *)a2 + 1);
      v11 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v12 >= v11 )
        goto LABEL_29;
LABEL_14:
      if ( (*v12 & 0x80000000) == 0 )
      {
        v13 = (unsigned __int8)*v12;
        v14 = v12 + 1;
        v29 = v13;
        *((_QWORD *)a2 + 1) = v14;
        goto LABEL_31;
      }
LABEL_29:
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v29) & 1) == 0 )
        return 0;
      v13 = v29;
      v14 = (_BYTE *)*((_QWORD *)a2 + 1);
      v11 = *((_QWORD *)a2 + 2);
LABEL_31:
      v19 = *((_DWORD *)this + 8);
      *((_DWORD *)this + 4) = v13;
      v10 = v19 | 2;
      *((_DWORD *)this + 8) = v19 | 2;
    }
    while ( (unsigned __int64)v14 >= v11 || *v14 != 26 );
    *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_34:
    v20 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 3);
    *((_DWORD *)this + 8) = v10 | 4;
    if ( !v20 )
    {
      v20 = (Caver::Proto::FloatColor *)operator new(0x20u);
      Caver::Proto::FloatColor::FloatColor(v20);
      *((_QWORD *)this + 3) = v20;
    }
    v21 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v21 >= *((_QWORD *)a2 + 2) || *v21 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v29) & 1) == 0 )
        return 0;
    }
    else
    {
      v29 = (unsigned __int8)*v21;
      *((_QWORD *)a2 + 1) = v21 + 1;
    }
    v22 = *((_DWORD *)a2 + 14);
    v23 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v22 + 1;
    if ( v22 >= v23 )
      return 0;
    v24 = google::protobuf::io::CodedInputStream::PushLimit(a2, v29);
    if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v20, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
      return 0;
    google::protobuf::io::CodedInputStream::PopLimit(a2, v24);
    v25 = *((_DWORD *)a2 + 14);
    v26 = __OFSUB__(v25, 1);
    v27 = v25 - 1;
    if ( v27 < 0 == v26 )
      *((_DWORD *)a2 + 14) = v27;
    if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
    {
      result = 1;
      *((_DWORD *)a2 + 8) = 0;
      *((_BYTE *)a2 + 36) = 1;
      return result;
    }
  }
}

