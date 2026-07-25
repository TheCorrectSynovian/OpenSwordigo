/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032215C
 * Mangled: _ZN5Caver5Proto19SimpleGlowComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SimpleGlowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x00000000003225F8  Caver::Proto::SimpleGlowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 139
 *   insn=0x0000000000322170 string=0x0000000000322174 "W"
 *   insn=0x0000000000322178 string=0x000000000032217C "X"
 *   insn=0x000000000032218C string=0x0000000000322190 "h"
 *   insn=0x0000000000322194 string=0x0000000000322198 """
 *   insn=0x0000000000322198 string=0x000000000032219C "\t"
 *   insn=0x00000000003221A0 string=0x00000000003221A4 "!"
 *   insn=0x00000000003221A4 string=0x00000000003221A8 ""
 *   insn=0x00000000003221A8 string=0x00000000003221AC "a""
 *   insn=0x00000000003221AC string=0x00000000003221B0 "h"
 *   insn=0x00000000003221B4 string=0x00000000003221D0 "(|"
 *   insn=0x00000000003221BC string=0x00000000003221C0 " V"
 *   insn=0x00000000003221C0 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003221C4 string=0x00000000003221C8 "a""
 *   insn=0x00000000003221D0 string=0x00000000003221D4 ""
 *   insn=0x00000000003221DC string=0x00000000003221E0 "{"
 *   insn=0x00000000003221DC string=0x0000000000322298 "("
 *   insn=0x00000000003221E0 string=0x00000000003221E4 ""
 *   insn=0x00000000003221E8 string=0x00000000003221EC "("
 *   insn=0x00000000003221E8 string=0x0000000000322248 "("
 *   insn=0x00000000003221E8 string=0x0000000000322258 "("
 *   insn=0x00000000003221E8 string=0x0000000000322288 "("
 *   insn=0x00000000003221E8 string=0x00000000003222A0 "("
 *   insn=0x00000000003221E8 string=0x00000000003222B0 "("
 *   insn=0x00000000003221E8 string=0x00000000003222C0 "("
 *   insn=0x00000000003221FC string=0x0000000000322200 ""
 *   insn=0x0000000000322208 string=0x0000000000322220 "h"
 *   insn=0x0000000000322210 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000322214 string=0x0000000000322218 "BG"
 *   insn=0x0000000000322218 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000322224 string=0x0000000000322228 """
 *   insn=0x0000000000322228 string=0x000000000032222C "\t"
 *   insn=0x0000000000322230 string=0x0000000000322234 ")"
 *   insn=0x0000000000322234 string=0x0000000000322238 ""
 *   insn=0x000000000032223C string=0x0000000000322240 "h"
 *   insn=0x0000000000322240 string=0x0000000000322244 "."
 *   insn=0x0000000000322244 string=0x00000000003222FC "h&G)\n"
 *   insn=0x0000000000322250 string=0x0000000000322254 " "
 *   insn=0x000000000032225C string=0x0000000000322260 "i"
 *   insn=0x0000000000322260 string=0x0000000000322264 "?"
 *   insn=0x0000000000322268 string=0x000000000032226C "*"
 *   insn=0x0000000000322270 string=0x0000000000322274 "J"
 *   insn=0x0000000000322274 string=0x0000000000322278 ")"
 *   insn=0x000000000032227C string=0x0000000000322280 "i"
 *   insn=0x0000000000322280 string=0x0000000000322284 "U"
 *   insn=0x000000000032228C string=0x0000000000322290 "!"
 *   insn=0x0000000000322290 string=0x0000000000322294 "\"
 *   insn=0x00000000003222A4 string=0x00000000003222A8 "a"
 *   insn=0x00000000003222A8 string=0x00000000003222AC "2"
 *   insn=0x00000000003222B8 string=0x00000000003222BC "t"
 *   insn=0x00000000003222C4 string=0x00000000003222C8 "a"
 *   insn=0x00000000003222DC string=0x00000000003222E0 "|m"
 *   insn=0x00000000003222E0 string=0x00000000003222E4 "`"
 *   insn=0x00000000003222E0 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003222F0 string=0x00000000003222F4 "W["
 *   insn=0x00000000003222F4 string=0x00000000001F9050 "0'"
 *   insn=0x00000000003222FC string=0x0000000000322300 "\n"
 *   insn=0x0000000000322304 string=0x0000000000322308 "j:"
 *   insn=0x0000000000322308 string=0x000000000032230C "*"
 *   insn=0x0000000000322324 string=0x0000000000322328 "r"
 *   insn=0x0000000000322328 string=0x000000000032232C " "
 *   insn=0x000000000032232C string=0x0000000000322330 "h"
 *   insn=0x0000000000322340 string=0x0000000000322344 "h:@"
 *   insn=0x0000000000322344 string=0x0000000000322348 ""
 *   insn=0x0000000000322348 string=0x000000000032234C "K"
 *   insn=0x000000000032234C string=0x0000000000322350 "h:"
 *   insn=0x000000000032234C string=0x0000000000322354 "h"
 *   insn=0x000000000032235C string=0x0000000000322360 "\t"
 *   insn=0x0000000000322360 string=0x0000000000322364 "?U"
 *   insn=0x0000000000322364 string=0x0000000000322368 "A"
 *   insn=0x0000000000322368 string=0x000000000032236C ""
 *   insn=0x000000000032236C string=0x0000000000322370 "h"
 *   insn=0x000000000032237C string=0x00000000001FA750 "0'"
 *   insn=0x000000000032238C string=0x0000000000322390 "("
 *   insn=0x0000000000322394 string=0x0000000000322398 "i"
 *   insn=0x0000000000322398 string=0x000000000032239C "?"
 *   insn=0x00000000003223A0 string=0x00000000003223A4 "*"
 *   insn=0x00000000003223A4 string=0x00000000003223A8 "_a"
 *   insn=0x00000000003223A8 string=0x00000000003223AC "!"
 *   insn=0x00000000003223AC string=0x00000000003223B0 ")"
 *   insn=0x00000000003223B0 string=0x00000000003223B4 "i"
 *   insn=0x00000000003223B4 string=0x00000000003223B8 "?"
 *   insn=0x00000000003223C4 string=0x00000000003223C8 ""["
 *   insn=0x00000000003223C8 string=0x00000000003223CC " "
 *   insn=0x00000000003223D0 string=0x00000000003223D4 "i"
 *   insn=0x00000000003223DC string=0x00000000003223E0 "?"
 *   insn=0x00000000003223E0 string=0x00000000003223E4 "j"
 *   insn=0x00000000003223E8 string=0x00000000003223EC """
 *   insn=0x00000000003223EC string=0x00000000003223F0 "("
 *   insn=0x00000000003223F8 string=0x00000000003223FC "("
 *   insn=0x00000000003223FC string=0x0000000000322400 "h"
 *   insn=0x000000000032241C string=0x0000000000322420 "("
 *   insn=0x0000000000322424 string=0x0000000000322428 "h"
 *   insn=0x0000000000322430 string=0x0000000000322434 "\t"
 *   insn=0x0000000000322434 string=0x0000000000322438 "?"
 *   insn=0x000000000032243C string=0x0000000000322440 ""
 *   insn=0x0000000000322440 string=0x0000000000322444 "h"
 *   insn=0x0000000000322460 string=0x0000000000322464 "("
 *   insn=0x0000000000322468 string=0x000000000032246C "h"
 *   insn=0x0000000000322474 string=0x0000000000322478 "\t"
 *   insn=0x0000000000322478 string=0x000000000032247C "?"
 *   insn=0x0000000000322480 string=0x0000000000322484 ""
 *   insn=0x0000000000322484 string=0x0000000000322488 "h"
 *   insn=0x00000000003224A4 string=0x00000000003224A8 "("
 *   insn=0x00000000003224AC string=0x00000000003224B0 "i"
 *   insn=0x00000000003224B0 string=0x00000000003224B4 "?"
 *   insn=0x00000000003224B8 string=0x00000000003224BC "*"
 *   insn=0x00000000003224BC string=0x00000000003224C0 "_"
 *   insn=0x00000000003224C0 string=0x00000000003224C4 "a"
 *   insn=0x00000000003224C4 string=0x00000000003224C8 ")"
 *   insn=0x00000000003224C8 string=0x00000000003224CC "i"
 *   insn=0x00000000003224D0 string=0x00000000003224D4 ""
 *   insn=0x00000000003224DC string=0x00000000003224F4 "h"
 *   insn=0x00000000003224E0 string=0x00000000003224E4 "?L"
 *   insn=0x00000000003224EC string=0x00000000001F7CD0 "0'"
 *   insn=0x00000000003224FC string=0x0000000000322500 "\t"
 *   insn=0x0000000000322504 string=0x0000000000322508 ")"
 *   insn=0x0000000000322508 string=0x000000000032250C ""
 *   insn=0x0000000000322510 string=0x0000000000322514 "h"
 *   insn=0x0000000000322518 string=0x000000000032252C "h&G)\n"
 *   insn=0x0000000000322524 string=0x0000000000322528 "@"
 *   insn=0x000000000032252C string=0x0000000000322530 "\n"
 *   insn=0x0000000000322534 string=0x0000000000322538 "j:"
 *   insn=0x0000000000322554 string=0x0000000000322558 "nL"
 *   insn=0x0000000000322558 string=0x00000000001F5710 "P'"
 *   insn=0x000000000032255C string=0x0000000000322560 "h"
 *   insn=0x0000000000322560 string=0x0000000000322564 "h"
 *   insn=0x000000000032256C string=0x0000000000322570 "("
 *   insn=0x0000000000322570 string=0x0000000000322574 "h:@"
 *   insn=0x0000000000322574 string=0x0000000000322578 ""
 *   insn=0x0000000000322578 string=0x000000000032257C "K"
 *   insn=0x000000000032257C string=0x0000000000322580 "h:"
 *   insn=0x000000000032257C string=0x0000000000322584 "h"
 *   insn=0x0000000000322588 string=0x000000000032258C "!"
 *   insn=0x000000000032258C string=0x0000000000322590 "h.@"
 *   insn=0x000000000032259C string=0x00000000003225A0 "`"
 *   insn=0x00000000003225C0 string=0x00000000003225DC "=O"
 *   insn=0x00000000003225DC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003225E8 string=0x00000000003225EC "1S"
 *   insn=0x00000000003225EC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SimpleGlowComponent::MergePartialFromCodedStream(
        Caver::Proto::SimpleGlowComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  Caver::Proto::FloatColor *v9; // x21
  char *v10; // x8
  unsigned __int64 v11; // x8
  char *v12; // x9
  unsigned int v13; // w10
  _BYTE *v14; // x9
  int v15; // w8
  int v16; // w8
  int v17; // w9
  int v18; // w22
  int v19; // w8
  bool v20; // vf
  int v21; // w8
  _BYTE *v22; // x8
  int v23; // w9
  _BYTE *v24; // x9
  int v25; // w11
  int v26; // w9
  _BYTE *v27; // x8
  int v28; // w9
  _BYTE *v29; // x8
  int v30; // w9
  _BYTE *v31; // x9
  Caver::Proto::Vector2 *v32; // x21
  char *v33; // x8
  int v34; // w8
  int v35; // w9
  int v36; // w22
  int v37; // w8
  int v38; // w8
  __int64 result; // x0
  unsigned int v40; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v41; // [xsp+8h] [xbp-38h]

  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_29;
        v9 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 14) |= 1u;
        if ( !v9 )
        {
          v9 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v9);
          *((_QWORD *)this + 2) = v9;
        }
        v10 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v10 >= *((_QWORD *)a2 + 2) || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
            return 0;
        }
        else
        {
          v40 = (unsigned __int8)*v10;
          *((_QWORD *)a2 + 1) = v10 + 1;
        }
        v16 = *((_DWORD *)a2 + 14);
        v17 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v16 + 1;
        if ( v16 >= v17 )
          return 0;
        v18 = google::protobuf::io::CodedInputStream::PushLimit(a2, v40);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v9, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v18);
        v19 = *((_DWORD *)a2 + 14);
        v20 = __OFSUB__(v19, 1);
        v21 = v19 - 1;
        if ( v21 < 0 == v20 )
          *((_DWORD *)a2 + 14) = v21;
        v22 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v22 >= *((_QWORD *)a2 + 2) || *v22 != 21 )
          continue;
        *((_QWORD *)a2 + 1) = v22 + 1;
        goto LABEL_41;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_29;
LABEL_41:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v40) & 1) == 0 )
          return 0;
        v23 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 6) = v40;
        *((_DWORD *)this + 14) = v23 | 2;
        v24 = (_BYTE *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v24 >= v11 || *v24 != 24 )
          continue;
        v12 = v24 + 1;
        *((_QWORD *)a2 + 1) = v12;
        if ( (unsigned __int64)v12 >= v11 )
          goto LABEL_45;
LABEL_18:
        if ( *v12 < 0 )
        {
LABEL_45:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
            return 0;
          v13 = v40;
          v14 = (_BYTE *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v13 = (unsigned __int8)*v12;
          v14 = v12 + 1;
          v40 = v13;
          *((_QWORD *)a2 + 1) = v14;
        }
        v25 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 7) = v13;
        *((_DWORD *)this + 14) = v25 | 4;
        if ( (unsigned __int64)v14 >= v11 || *v14 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_50:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v40) & 1) == 0 )
          return 0;
        v26 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 8) = v40;
        *((_DWORD *)this + 14) = v26 | 8;
        v27 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v27 >= *((_QWORD *)a2 + 2) || *v27 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v27 + 1;
LABEL_54:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v40) & 1) == 0 )
          return 0;
        v28 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 12) = v40;
        *((_DWORD *)this + 14) = v28 | 0x20;
        v29 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v29 >= *((_QWORD *)a2 + 2) || *v29 != 53 )
          continue;
        *((_QWORD *)a2 + 1) = v29 + 1;
LABEL_58:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v40) & 1) == 0 )
          return 0;
        v30 = *((_DWORD *)this + 14);
        *((_DWORD *)this + 13) = v40;
        v15 = v30 | 0x40;
        *((_DWORD *)this + 14) = v30 | 0x40;
        v31 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v31 >= *((_QWORD *)a2 + 2) || *v31 != 58 )
          continue;
        *((_QWORD *)a2 + 1) = v31 + 1;
LABEL_62:
        v32 = (Caver::Proto::Vector2 *)*((_QWORD *)this + 5);
        *((_DWORD *)this + 14) = v15 | 0x10;
        if ( !v32 )
        {
          v32 = (Caver::Proto::Vector2 *)operator new(0x18u);
          Caver::Proto::Vector2::Vector2(v32);
          *((_QWORD *)this + 5) = v32;
        }
        v33 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v33 >= *((_QWORD *)a2 + 2) || *v33 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v40) & 1) == 0 )
            return 0;
        }
        else
        {
          v40 = (unsigned __int8)*v33;
          *((_QWORD *)a2 + 1) = v33 + 1;
        }
        v34 = *((_DWORD *)a2 + 14);
        v35 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v34 + 1;
        if ( v34 < v35 )
        {
          v36 = google::protobuf::io::CodedInputStream::PushLimit(a2, v40);
          if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v32, a2) & 1) != 0 )
          {
            if ( *((_BYTE *)a2 + 36) )
            {
              google::protobuf::io::CodedInputStream::PopLimit(a2, v36);
              v37 = *((_DWORD *)a2 + 14);
              v20 = __OFSUB__(v37, 1);
              v38 = v37 - 1;
              if ( v38 < 0 == v20 )
                *((_DWORD *)a2 + 14) = v38;
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
          goto LABEL_29;
        v12 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v12 < v11 )
          goto LABEL_18;
        goto LABEL_45;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_50;
        goto LABEL_29;
      case 5u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_29;
        goto LABEL_54;
      case 6u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_58;
        goto LABEL_29;
      case 7u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_29;
        v15 = *((_DWORD *)this + 14);
        goto LABEL_62;
      default:
        v8 = v6 & 7;
LABEL_29:
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

