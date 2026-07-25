/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000319134
 * Mangled: _ZN5Caver5Proto24BreakableObjectComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::BreakableObjectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 *   0x00000000003194A0  Caver::Proto::BreakableObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 115
 *   insn=0x0000000000319148 string=0x000000000031914C "W"
 *   insn=0x0000000000319164 string=0x0000000000319168 "h"
 *   insn=0x000000000031916C string=0x0000000000319170 """
 *   insn=0x0000000000319170 string=0x0000000000319174 "\t"
 *   insn=0x0000000000319178 string=0x000000000031917C "!"
 *   insn=0x000000000031917C string=0x0000000000319180 ""
 *   insn=0x0000000000319180 string=0x0000000000319184 "a""
 *   insn=0x0000000000319184 string=0x0000000000319188 "h"
 *   insn=0x000000000031918C string=0x00000000003191A8 "(|"
 *   insn=0x0000000000319194 string=0x0000000000319198 "*z"
 *   insn=0x0000000000319198 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000031919C string=0x00000000003191A0 "a""
 *   insn=0x00000000003191A8 string=0x00000000003191AC ""
 *   insn=0x00000000003191B4 string=0x00000000003191B8 "{"
 *   insn=0x00000000003191B4 string=0x00000000003192E8 "("
 *   insn=0x00000000003191B8 string=0x00000000003191BC ""
 *   insn=0x00000000003191C0 string=0x00000000003191C4 "("
 *   insn=0x00000000003191C0 string=0x00000000003191F4 "("
 *   insn=0x00000000003191C0 string=0x000000000031925C "("
 *   insn=0x00000000003191C0 string=0x00000000003192B8 "("
 *   insn=0x00000000003191C4 string=0x00000000003191C8 "!\t"
 *   insn=0x00000000003191C8 string=0x00000000003191CC "i"
 *   insn=0x00000000003191CC string=0x00000000003191D0 "?"
 *   insn=0x00000000003191D4 string=0x00000000003191D8 "*"
 *   insn=0x00000000003191D8 string=0x00000000003191DC "J"
 *   insn=0x00000000003191DC string=0x00000000003191E0 "J"
 *   insn=0x00000000003191E0 string=0x00000000003191E4 ")"
 *   insn=0x00000000003191E8 string=0x00000000003191EC "i"
 *   insn=0x00000000003191EC string=0x00000000003191F0 "k"
 *   insn=0x00000000003191F8 string=0x00000000003191FC "i"
 *   insn=0x00000000003191FC string=0x0000000000319200 "?"
 *   insn=0x0000000000319204 string=0x0000000000319208 "("
 *   insn=0x000000000031920C string=0x0000000000319210 ""
 *   insn=0x0000000000319210 string=0x0000000000319214 ")"
 *   insn=0x0000000000319218 string=0x000000000031921C "i"
 *   insn=0x0000000000319224 string=0x0000000000319238 "h"
 *   insn=0x000000000031922C string=0x0000000000319230 ")"
 *   insn=0x000000000031923C string=0x0000000000319240 "B"
 *   insn=0x0000000000319240 string=0x0000000000319244 "\t"
 *   insn=0x0000000000319244 string=0x0000000000319248 "?"
 *   insn=0x000000000031924C string=0x0000000000319250 ""
 *   insn=0x0000000000319250 string=0x0000000000319254 "h"
 *   insn=0x0000000000319260 string=0x0000000000319264 "A"
 *   insn=0x000000000031926C string=0x0000000000319270 ""
 *   insn=0x0000000000319278 string=0x0000000000319290 "h"
 *   insn=0x0000000000319280 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000319284 string=0x0000000000319288 "^o"
 *   insn=0x0000000000319288 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000319294 string=0x0000000000319298 "b"
 *   insn=0x0000000000319298 string=0x000000000031929C "\t"
 *   insn=0x000000000031929C string=0x00000000003192A0 ")"
 *   insn=0x00000000003192A0 string=0x00000000003192A4 ")"
 *   insn=0x00000000003192A4 string=0x00000000003192A8 ""
 *   insn=0x00000000003192AC string=0x00000000003192B0 "h"
 *   insn=0x00000000003192B4 string=0x0000000000319314 "h&G)\n"
 *   insn=0x00000000003192BC string=0x00000000003192C0 "i"
 *   insn=0x00000000003192C0 string=0x00000000003192C4 "?"
 *   insn=0x00000000003192C8 string=0x00000000003192CC "*"
 *   insn=0x00000000003192CC string=0x00000000003192D0 "J"
 *   insn=0x00000000003192D0 string=0x00000000003192D4 "J"
 *   insn=0x00000000003192D4 string=0x00000000003192D8 ")"
 *   insn=0x00000000003192DC string=0x00000000003192E0 "i"
 *   insn=0x00000000003192E0 string=0x00000000003192E4 "C"
 *   insn=0x00000000003192F4 string=0x00000000003192F8 "v"
 *   insn=0x00000000003192F8 string=0x00000000003192FC "`"
 *   insn=0x00000000003192F8 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003192FC string=0x0000000000319300 "S"
 *   insn=0x0000000000319308 string=0x000000000031930C "Q"
 *   insn=0x000000000031930C string=0x00000000001F9050 "0'"
 *   insn=0x0000000000319314 string=0x0000000000319318 "\n"
 *   insn=0x000000000031931C string=0x0000000000319320 "j:"
 *   insn=0x0000000000319320 string=0x0000000000319324 "J\t"
 *   insn=0x000000000031933C string=0x0000000000319340 "x~"
 *   insn=0x0000000000319340 string=0x0000000000319344 "@"
 *   insn=0x0000000000319340 string=0x00000000001F8D20 "0'"
 *   insn=0x0000000000319344 string=0x0000000000319348 "h"
 *   insn=0x0000000000319348 string=0x000000000031934C ""
 *   insn=0x0000000000319358 string=0x000000000031935C "h:@"
 *   insn=0x000000000031935C string=0x0000000000319360 ""
 *   insn=0x0000000000319360 string=0x0000000000319364 "K"
 *   insn=0x0000000000319364 string=0x0000000000319368 "h:"
 *   insn=0x0000000000319364 string=0x000000000031936C "h"
 *   insn=0x0000000000319374 string=0x0000000000319378 "h.@"
 *   insn=0x0000000000319378 string=0x000000000031937C "h"
 *   insn=0x000000000031937C string=0x0000000000319380 ">"
 *   insn=0x0000000000319388 string=0x000000000031938C "1"
 *   insn=0x0000000000319394 string=0x0000000000319398 "i"
 *   insn=0x000000000031939C string=0x00000000003193A0 "_"
 *   insn=0x00000000003193A8 string=0x00000000003193AC "j"
 *   insn=0x00000000003193AC string=0x00000000003193B0 "?"
 *   insn=0x00000000003193B8 string=0x00000000003193BC "*"
 *   insn=0x00000000003193BC string=0x00000000003193C0 "_A"
 *   insn=0x00000000003193C0 string=0x00000000003193C4 "!"
 *   insn=0x00000000003193C4 string=0x00000000003193C8 ")"
 *   insn=0x00000000003193C8 string=0x00000000003193CC "i"
 *   insn=0x00000000003193CC string=0x00000000003193D0 "?"
 *   insn=0x00000000003193E0 string=0x00000000003193E4 "@"
 *   insn=0x00000000003193E8 string=0x00000000003193EC "i"
 *   insn=0x00000000003193F4 string=0x00000000003193F8 "?"
 *   insn=0x00000000003193F8 string=0x00000000003193FC "j"
 *   insn=0x0000000000319400 string=0x0000000000319404 """
 *   insn=0x0000000000319404 string=0x0000000000319408 "*"
 *   insn=0x0000000000319408 string=0x000000000031940C "_a"
 *   insn=0x0000000000319410 string=0x0000000000319414 ")"
 *   insn=0x0000000000319414 string=0x0000000000319418 "i"
 *   insn=0x0000000000319418 string=0x000000000031941C "?"
 *   insn=0x000000000031941C string=0x0000000000319420 "C"
 *   insn=0x0000000000319428 string=0x000000000031942C "\t"
 *   insn=0x0000000000319438 string=0x000000000031943C "i"
 *   insn=0x000000000031943C string=0x0000000000319440 "~"
 *   insn=0x0000000000319458 string=0x000000000031945C "a"
 *   insn=0x000000000031947C string=0x0000000000319480 "`"
 *   insn=0x0000000000319488 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000319494 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000319498 string=0x000000000031949C "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BreakableObjectComponent::MergePartialFromCodedStream(
        Caver::Proto::BreakableObjectComponent *this,
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
  unsigned int v14; // w8
  int v15; // w9
  _BYTE *v16; // x8
  Caver::Proto::Program *v17; // x21
  char *v18; // x8
  char *v19; // x9
  unsigned int v20; // w10
  _BYTE *v21; // x9
  int v22; // w8
  int v23; // w9
  int v24; // w22
  int v25; // w8
  bool v26; // vf
  int v27; // w8
  int v28; // w11
  int v29; // w11
  __int64 result; // x0
  unsigned int v31; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v32; // [xsp+8h] [xbp-38h]

  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_31;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
            return 0;
          v11 = v31;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v31 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v28 = *((_DWORD *)this + 8);
        *((_BYTE *)this + 12) = v11 != 0;
        *((_DWORD *)this + 8) = v28 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v19 = v12 + 1;
        *((_QWORD *)a2 + 1) = v19;
        if ( (unsigned __int64)v19 < v9 )
          goto LABEL_28;
        goto LABEL_48;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_31;
        v19 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v19 >= v9 )
          goto LABEL_48;
LABEL_28:
        if ( *v19 < 0 )
        {
LABEL_48:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
            return 0;
          v20 = v31;
          v21 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v20 = (unsigned __int8)*v19;
          v21 = v19 + 1;
          v31 = v20;
          *((_QWORD *)a2 + 1) = v21;
        }
        v29 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 4) = v20;
        *((_DWORD *)this + 8) = v29 | 2;
        if ( (unsigned __int64)v21 >= v9 || *v21 != 24 )
          continue;
        v13 = v21 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v9 )
          goto LABEL_53;
LABEL_14:
        if ( (*v13 & 0x80000000) == 0 )
        {
          v14 = (unsigned __int8)*v13;
          v31 = v14;
          *((_QWORD *)a2 + 1) = v13 + 1;
          if ( v14 > 2 )
            goto LABEL_17;
LABEL_16:
          v15 = *((_DWORD *)this + 8);
          *((_DWORD *)this + 5) = v14;
          *((_DWORD *)this + 8) = v15 | 4;
          goto LABEL_17;
        }
LABEL_53:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
          return 0;
        v14 = v31;
        if ( v31 <= 2 )
          goto LABEL_16;
LABEL_17:
        v16 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 2) || *v16 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v16 + 1;
LABEL_21:
        v17 = (Caver::Proto::Program *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 8) |= 8u;
        if ( !v17 )
        {
          v17 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v17);
          *((_QWORD *)this + 3) = v17;
        }
        v18 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v18 >= *((_QWORD *)a2 + 2) || *v18 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
            return 0;
        }
        else
        {
          v31 = (unsigned __int8)*v18;
          *((_QWORD *)a2 + 1) = v18 + 1;
        }
        v22 = *((_DWORD *)a2 + 14);
        v23 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v22 + 1;
        if ( v22 < v23 )
        {
          v24 = google::protobuf::io::CodedInputStream::PushLimit(a2, v31);
          if ( (Caver::Proto::Program::MergePartialFromCodedStream(v17, a2) & 1) != 0 )
          {
            if ( *((_BYTE *)a2 + 36) )
            {
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
              continue;
            }
          }
        }
        return 0;
      case 3u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_31;
        v13 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v13 < *((_QWORD *)a2 + 2) )
          goto LABEL_14;
        goto LABEL_53;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_21;
        goto LABEL_31;
      default:
        v8 = v6 & 7;
LABEL_31:
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

