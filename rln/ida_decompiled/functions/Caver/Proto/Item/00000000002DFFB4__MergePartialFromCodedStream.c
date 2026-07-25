/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DFFB4
 * Mangled: _ZN5Caver5Proto4Item27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Item::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F58A0  Caver::Proto::Item::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 174
 *   insn=0x00000000002DFFD0 string=0x00000000002DFFD4 "U"
 *   insn=0x00000000002DFFD4 string=0x00000000002DFFD8 "7 "
 *   insn=0x00000000002DFFD8 string=0x00000000002DFFDC "8 "
 *   insn=0x00000000002DFFE8 string=0x00000000002DFFEC "9 "
 *   insn=0x00000000002DFFEC string=0x00000000002DFFF0 ": "
 *   insn=0x00000000002DFFF0 string=0x00000000002DFFF4 "9"
 *   insn=0x00000000002DFFF4 string=0x00000000002DFFF8 "Z"
 *   insn=0x00000000002DFFFC string=0x00000000002E0000 "< "
 *   insn=0x00000000002E0004 string=0x00000000002E0008 "V"
 *   insn=0x00000000002E0014 string=0x00000000002E0018 "c"
 *   insn=0x00000000002E0018 string=0x00000000002E001C "h"
 *   insn=0x00000000002E0020 string=0x00000000002E0024 """
 *   insn=0x00000000002E0024 string=0x00000000002E0028 "\t"
 *   insn=0x00000000002E002C string=0x00000000002E0030 "!"
 *   insn=0x00000000002E0030 string=0x00000000002E0034 ""
 *   insn=0x00000000002E0034 string=0x00000000002E0038 "a""
 *   insn=0x00000000002E0038 string=0x00000000002E003C "h"
 *   insn=0x00000000002E0040 string=0x00000000002E005C "(|"
 *   insn=0x00000000002E0048 string=0x00000000002E004C "}^"
 *   insn=0x00000000002E004C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002E0050 string=0x00000000002E0054 "a""
 *   insn=0x00000000002E0054 string=0x00000000002E0058 "!#"
 *   insn=0x00000000002E005C string=0x00000000002E0060 ""
 *   insn=0x00000000002E0064 string=0x00000000002E0068 "\n"
 *   insn=0x00000000002E0068 string=0x00000000002E01A8 "("
 *   insn=0x00000000002E006C string=0x00000000002E0070 ""
 *   insn=0x00000000002E0074 string=0x00000000002E0078 "("
 *   insn=0x00000000002E0074 string=0x00000000002E00A8 "("
 *   insn=0x00000000002E0074 string=0x00000000002E00B8 "("
 *   insn=0x00000000002E0074 string=0x00000000002E00C8 "("
 *   insn=0x00000000002E0074 string=0x00000000002E00D8 "("
 *   insn=0x00000000002E0074 string=0x00000000002E0108 "("
 *   insn=0x00000000002E0074 string=0x00000000002E0118 "("
 *   insn=0x00000000002E0074 string=0x00000000002E0148 "("
 *   insn=0x00000000002E0074 string=0x00000000002E0178 "("
 *   insn=0x00000000002E007C string=0x00000000002E0080 "i"
 *   insn=0x00000000002E0080 string=0x00000000002E0084 "?"
 *   insn=0x00000000002E0088 string=0x00000000002E008C "("
 *   insn=0x00000000002E0090 string=0x00000000002E0094 ""
 *   insn=0x00000000002E0094 string=0x00000000002E0098 ")"
 *   insn=0x00000000002E009C string=0x00000000002E00A0 "i"
 *   insn=0x00000000002E00A0 string=0x00000000002E00A4 "M"
 *   insn=0x00000000002E00A4 string=0x00000000002E01D8 "\t"
 *   insn=0x00000000002E00BC string=0x00000000002E00C0 "a"
 *   insn=0x00000000002E00C0 string=0x00000000002E00C4 "j"
 *   insn=0x00000000002E00D0 string=0x00000000002E00D4 "}"
 *   insn=0x00000000002E00DC string=0x00000000002E00E0 "i"
 *   insn=0x00000000002E00E0 string=0x00000000002E00E4 "?"
 *   insn=0x00000000002E00E8 string=0x00000000002E00EC "*"
 *   insn=0x00000000002E00F0 string=0x00000000002E00F4 "J"
 *   insn=0x00000000002E00F4 string=0x00000000002E00F8 ")"
 *   insn=0x00000000002E00FC string=0x00000000002E0100 "i"
 *   insn=0x00000000002E0110 string=0x00000000002E0114 "@"
 *   insn=0x00000000002E011C string=0x00000000002E0120 "i"
 *   insn=0x00000000002E0120 string=0x00000000002E0124 "?"
 *   insn=0x00000000002E0128 string=0x00000000002E012C "*"
 *   insn=0x00000000002E0130 string=0x00000000002E0134 "J"
 *   insn=0x00000000002E0134 string=0x00000000002E0138 ")"
 *   insn=0x00000000002E013C string=0x00000000002E0140 "i"
 *   insn=0x00000000002E014C string=0x00000000002E0150 "i"
 *   insn=0x00000000002E0150 string=0x00000000002E0154 "?"
 *   insn=0x00000000002E0154 string=0x00000000002E0158 """
 *   insn=0x00000000002E0158 string=0x00000000002E015C "*"
 *   insn=0x00000000002E0160 string=0x00000000002E0164 "J"
 *   insn=0x00000000002E0164 string=0x00000000002E0168 ")"
 *   insn=0x00000000002E016C string=0x00000000002E0170 "i"
 *   insn=0x00000000002E017C string=0x00000000002E0180 "i"
 *   insn=0x00000000002E0180 string=0x00000000002E0184 "?"
 *   insn=0x00000000002E0184 string=0x00000000002E0188 "b"
 *   insn=0x00000000002E0188 string=0x00000000002E018C "*"
 *   insn=0x00000000002E018C string=0x00000000002E0190 "*"
 *   insn=0x00000000002E0190 string=0x00000000002E0194 "J"
 *   insn=0x00000000002E0194 string=0x00000000002E0198 ")"
 *   insn=0x00000000002E019C string=0x00000000002E01A0 "i"
 *   insn=0x00000000002E01AC string=0x00000000002E01B0 "`"
 *   insn=0x00000000002E01B8 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002E01CC string=0x00000000001F9050 "0'"
 *   insn=0x00000000002E01D8 string=0x00000000002E01DC "?"
 *   insn=0x00000000002E01E0 string=0x00000000002E01F4 "h"
 *   insn=0x00000000002E01E8 string=0x00000000002E01EC ")"
 *   insn=0x00000000002E01FC string=0x00000000002E0200 "\t"
 *   insn=0x00000000002E0200 string=0x00000000002E0204 "?I"
 *   insn=0x00000000002E0208 string=0x00000000002E020C ""
 *   insn=0x00000000002E020C string=0x00000000002E0210 "h"
 *   insn=0x00000000002E0218 string=0x00000000002E021C ""
 *   insn=0x00000000002E021C string=0x00000000002E0220 "?"
 *   insn=0x00000000002E0230 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E0234 string=0x00000000002E0238 ";"
 *   insn=0x00000000002E0240 string=0x00000000002E0244 "ce"
 *   insn=0x00000000002E0244 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002E0248 string=0x00000000002E024C "h"
 *   insn=0x00000000002E0250 string=0x00000000002E0254 "B"
 *   insn=0x00000000002E0254 string=0x00000000002E0258 "\t"
 *   insn=0x00000000002E0258 string=0x00000000002E025C "?i"
 *   insn=0x00000000002E0260 string=0x00000000002E0264 ""
 *   insn=0x00000000002E0264 string=0x00000000002E0268 "h"
 *   insn=0x00000000002E0270 string=0x00000000002E0274 ""
 *   insn=0x00000000002E0274 string=0x00000000002E0278 "?"
 *   insn=0x00000000002E028C string=0x00000000002E0290 "c"
 *   insn=0x00000000002E0290 string=0x00000000002E0294 "("
 *   insn=0x00000000002E029C string=0x00000000002E02A0 "Le"
 *   insn=0x00000000002E02A4 string=0x00000000002E02A8 "h"
 *   insn=0x00000000002E02AC string=0x00000000002E02B0 "b"
 *   insn=0x00000000002E02B0 string=0x00000000002E02B4 "\t"
 *   insn=0x00000000002E02B4 string=0x00000000002E02B8 "?"
 *   insn=0x00000000002E02BC string=0x00000000002E02C0 ""
 *   insn=0x00000000002E02C0 string=0x00000000002E02C4 "h"
 *   insn=0x00000000002E02CC string=0x00000000002E02D0 ""
 *   insn=0x00000000002E02D0 string=0x00000000002E02D4 "?"
 *   insn=0x00000000002E02E8 string=0x00000000002E02EC "c"
 *   insn=0x00000000002E02EC string=0x00000000002E02F0 "("
 *   insn=0x00000000002E02F8 string=0x00000000002E02FC "5e"
 *   insn=0x00000000002E02FC string=0x00000000002E0300 " "
 *   insn=0x00000000002E0300 string=0x00000000002E0304 "h"
 *   insn=0x00000000002E030C string=0x00000000002E0310 "\t"
 *   insn=0x00000000002E0310 string=0x00000000002E0314 "?"
 *   insn=0x00000000002E0314 string=0x00000000002E0318 "!"
 *   insn=0x00000000002E0318 string=0x00000000002E031C ""
 *   insn=0x00000000002E031C string=0x00000000002E0320 "h"
 *   insn=0x00000000002E0328 string=0x00000000002E032C ""
 *   insn=0x00000000002E032C string=0x00000000002E0330 "?"
 *   insn=0x00000000002E0344 string=0x00000000002E0348 "c"
 *   insn=0x00000000002E0348 string=0x00000000002E034C "("
 *   insn=0x00000000002E0358 string=0x00000000002E035C "@"
 *   insn=0x00000000002E035C string=0x00000000002E0360 "i"
 *   insn=0x00000000002E0360 string=0x00000000002E0364 "?"
 *   insn=0x00000000002E0368 string=0x00000000002E036C "*"
 *   insn=0x00000000002E036C string=0x00000000002E0370 "_"
 *   insn=0x00000000002E0370 string=0x00000000002E0374 "A"
 *   insn=0x00000000002E0374 string=0x00000000002E0378 ")"
 *   insn=0x00000000002E0378 string=0x00000000002E037C "i"
 *   insn=0x00000000002E037C string=0x00000000002E0380 "?"
 *   insn=0x00000000002E0380 string=0x00000000002E0384 "C"
 *   insn=0x00000000002E038C string=0x00000000002E0390 "0c"
 *   insn=0x00000000002E0398 string=0x00000000002E039C "i"
 *   insn=0x00000000002E03A0 string=0x00000000002E03A4 "_"
 *   insn=0x00000000002E03AC string=0x00000000002E03B0 "j"
 *   insn=0x00000000002E03B0 string=0x00000000002E03B4 "?"
 *   insn=0x00000000002E03BC string=0x00000000002E03C0 "*"
 *   insn=0x00000000002E03C0 string=0x00000000002E03C4 "_"
 *   insn=0x00000000002E03C8 string=0x00000000002E03CC ")"
 *   insn=0x00000000002E03CC string=0x00000000002E03D0 "i"
 *   insn=0x00000000002E03D0 string=0x00000000002E03D4 "?"
 *   insn=0x00000000002E03D4 string=0x00000000002E03D8 "#"
 *   insn=0x00000000002E03E0 string=0x00000000002E03E4 "c"
 *   insn=0x00000000002E03EC string=0x00000000002E03F0 "i"
 *   insn=0x00000000002E03F8 string=0x00000000002E03FC "?"
 *   insn=0x00000000002E03FC string=0x00000000002E0400 "j"
 *   insn=0x00000000002E0408 string=0x00000000002E040C "*"
 *   insn=0x00000000002E040C string=0x00000000002E0410 "_"
 *   insn=0x00000000002E0410 string=0x00000000002E0414 "A"
 *   insn=0x00000000002E0414 string=0x00000000002E0418 ")"
 *   insn=0x00000000002E0418 string=0x00000000002E041C "i"
 *   insn=0x00000000002E041C string=0x00000000002E0420 "?"
 *   insn=0x00000000002E0420 string=0x00000000002E0424 "C"
 *   insn=0x00000000002E042C string=0x00000000002E0430 "c"
 *   insn=0x00000000002E0438 string=0x00000000002E043C "i"
 *   insn=0x00000000002E0444 string=0x00000000002E0448 "?"
 *   insn=0x00000000002E0448 string=0x00000000002E044C "j"
 *   insn=0x00000000002E0450 string=0x00000000002E0454 "B"
 *   insn=0x00000000002E0454 string=0x00000000002E0458 "*"
 *   insn=0x00000000002E0458 string=0x00000000002E045C "_!"
 *   insn=0x00000000002E0460 string=0x00000000002E0464 ")"
 *   insn=0x00000000002E0464 string=0x00000000002E0468 "i"
 *   insn=0x00000000002E0468 string=0x00000000002E046C "?"
 *   insn=0x00000000002E047C string=0x00000000002E0480 " "
 *   insn=0x00000000002E0484 string=0x00000000002E0488 "i"
 *   insn=0x00000000002E0490 string=0x00000000002E0494 "?"
 *   insn=0x00000000002E0494 string=0x00000000002E0498 "j"
 *   insn=0x00000000002E04A0 string=0x00000000002E04A4 "h.@"
 *   insn=0x00000000002E04B0 string=0x00000000002E04B4 "`"
 *   insn=0x00000000002E04D0 string=0x00000000002E04D4 "!"
 *   insn=0x00000000002E04D4 string=0x00000000002E04F8 "vW"
 *   insn=0x00000000002E04F8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Item::MergePartialFromCodedStream(
        Caver::Proto::Item *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  char *v9; // x9
  unsigned int v10; // w8
  unsigned __int64 v11; // x8
  char *v12; // x9
  unsigned int v13; // w10
  _BYTE *v14; // x9
  char *v15; // x9
  unsigned int v16; // w10
  _BYTE *v17; // x9
  char *v18; // x9
  unsigned int v19; // w10
  _BYTE *v20; // x9
  char *v21; // x9
  unsigned int v22; // w10
  unsigned __int8 *v23; // x9
  int v24; // w9
  _BYTE *v25; // x8
  __int64 *v26; // x1
  _QWORD *v27; // x0
  _BYTE *v28; // x8
  __int64 *v29; // x1
  _QWORD *v30; // x0
  _BYTE *v31; // x8
  __int64 *v32; // x1
  _QWORD *v33; // x0
  _BYTE *v34; // x8
  __int64 *v35; // x1
  _QWORD *v36; // x0
  _BYTE *v37; // x9
  int v38; // w11
  int v39; // w11
  int v40; // w11
  int v41; // w11
  __int64 result; // x0
  unsigned int v43; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v44; // [xsp+8h] [xbp-58h]

  v44 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_37;
        v9 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v9 >= *((_QWORD *)a2 + 2) || *v9 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v43) & 1) == 0 )
            return 0;
          v10 = v43;
        }
        else
        {
          v10 = (unsigned __int8)*v9;
          v43 = v10;
          *((_QWORD *)a2 + 1) = v9 + 1;
        }
        if ( v10 - 1 <= 4 )
        {
          v24 = *((_DWORD *)this + 16);
          *((_DWORD *)this + 3) = v10;
          *((_DWORD *)this + 16) = v24 | 1;
        }
        v25 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v25 >= *((_QWORD *)a2 + 2) || *v25 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v25 + 1;
        goto LABEL_47;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_37;
LABEL_47:
        v26 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 16) |= 2u;
        if ( v26 == &Caver::Proto::Item::_default_name_ )
        {
          v27 = (_QWORD *)operator new(8u);
          *v27 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v27;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v28 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v28 >= *((_QWORD *)a2 + 2) || *v28 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v28 + 1;
LABEL_53:
        v29 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 16) |= 4u;
        if ( v29 == &Caver::Proto::Item::_default_title_ )
        {
          v30 = (_QWORD *)operator new(8u);
          *v30 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v30;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v31 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v31 >= *((_QWORD *)a2 + 2) || *v31 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v31 + 1;
LABEL_59:
        v32 = (__int64 *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 16) |= 8u;
        if ( v32 == &Caver::Proto::Item::_default_short_description_ )
        {
          v33 = (_QWORD *)operator new(8u);
          *v33 = &byte_6FD2F8;
          *((_QWORD *)this + 4) = v33;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v34 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v34 >= *((_QWORD *)a2 + 2) || *v34 != 42 )
          continue;
        *((_QWORD *)a2 + 1) = v34 + 1;
LABEL_65:
        v35 = (__int64 *)*((_QWORD *)this + 5);
        *((_DWORD *)this + 16) |= 0x10u;
        if ( v35 == &Caver::Proto::Item::_default_description_ )
        {
          v36 = (_QWORD *)operator new(8u);
          *v36 = &byte_6FD2F8;
          *((_QWORD *)this + 5) = v36;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v37 = (_BYTE *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v37 >= v11 || *v37 != 48 )
          continue;
        v15 = v37 + 1;
        *((_QWORD *)a2 + 1) = v15;
        if ( (unsigned __int64)v15 >= v11 )
          goto LABEL_71;
LABEL_26:
        if ( *v15 < 0 )
        {
LABEL_71:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v43) & 1) == 0 )
            return 0;
          v16 = v43;
          v17 = (_BYTE *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v16 = (unsigned __int8)*v15;
          v17 = v15 + 1;
          v43 = v16;
          *((_QWORD *)a2 + 1) = v17;
        }
        v38 = *((_DWORD *)this + 16);
        *((_BYTE *)this + 48) = v16 != 0;
        *((_DWORD *)this + 16) = v38 | 0x20;
        if ( (unsigned __int64)v17 >= v11 || *v17 != 56 )
          continue;
        v18 = v17 + 1;
        *((_QWORD *)a2 + 1) = v18;
        if ( (unsigned __int64)v18 >= v11 )
          goto LABEL_76;
LABEL_30:
        if ( *v18 < 0 )
        {
LABEL_76:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v43) & 1) == 0 )
            return 0;
          v19 = v43;
          v20 = (_BYTE *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v19 = (unsigned __int8)*v18;
          v20 = v18 + 1;
          v43 = v19;
          *((_QWORD *)a2 + 1) = v20;
        }
        v39 = *((_DWORD *)this + 16);
        *((_DWORD *)this + 13) = v19;
        *((_DWORD *)this + 16) = v39 | 0x40;
        if ( (unsigned __int64)v20 >= v11 || *v20 != 64 )
          continue;
        v12 = v20 + 1;
        *((_QWORD *)a2 + 1) = v12;
        if ( (unsigned __int64)v12 >= v11 )
          goto LABEL_81;
LABEL_20:
        if ( *v12 < 0 )
        {
LABEL_81:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v43) & 1) == 0 )
            return 0;
          v13 = v43;
          v14 = (_BYTE *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v13 = (unsigned __int8)*v12;
          v14 = v12 + 1;
          v43 = v13;
          *((_QWORD *)a2 + 1) = v14;
        }
        v40 = *((_DWORD *)this + 16);
        *((_DWORD *)this + 14) = v13;
        *((_DWORD *)this + 16) = v40 | 0x80;
        if ( (unsigned __int64)v14 >= v11 || *v14 != 72 )
          continue;
        v21 = v14 + 1;
        *((_QWORD *)a2 + 1) = v21;
        if ( (unsigned __int64)v21 >= v11 )
          goto LABEL_86;
LABEL_34:
        if ( (*v21 & 0x80000000) == 0 )
        {
          v22 = (unsigned __int8)*v21;
          v23 = (unsigned __int8 *)(v21 + 1);
          v43 = v22;
          *((_QWORD *)a2 + 1) = v23;
          goto LABEL_88;
        }
LABEL_86:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v43) & 1) != 0 )
        {
          v22 = v43;
          v23 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v11 = *((_QWORD *)a2 + 2);
LABEL_88:
          v41 = *((_DWORD *)this + 16);
          *((_DWORD *)this + 15) = v22;
          *((_DWORD *)this + 16) = v41 | 0x100;
          if ( v23 == (unsigned __int8 *)v11 && *((_DWORD *)a2 + 11) )
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
        if ( v8 == 2 )
          goto LABEL_53;
        goto LABEL_37;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_59;
        goto LABEL_37;
      case 5u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_65;
        goto LABEL_37;
      case 6u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_37;
        v15 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v15 < v11 )
          goto LABEL_26;
        goto LABEL_71;
      case 7u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_37;
        v18 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v18 < v11 )
          goto LABEL_30;
        goto LABEL_76;
      case 8u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_37;
        v12 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v12 < v11 )
          goto LABEL_20;
        goto LABEL_81;
      case 9u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_37;
        v21 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v21 < v11 )
          goto LABEL_34;
        goto LABEL_86;
      default:
        v8 = v6 & 7;
LABEL_37:
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

