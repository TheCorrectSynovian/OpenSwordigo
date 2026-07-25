/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000321170
 * Mangled: _ZN5Caver5Proto20FireEmitterComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::FireEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 17
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x00000000003217B8  Caver::Proto::FireEmitterComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 194
 *   insn=0x0000000000321184 string=0x0000000000321188 "W"
 *   insn=0x000000000032118C string=0x0000000000321190 "X"
 *   insn=0x0000000000321190 string=0x000000000058B7C4 "<Z"
 *   insn=0x00000000003211A0 string=0x00000000003211A4 "h"
 *   insn=0x00000000003211A8 string=0x00000000003211AC """
 *   insn=0x00000000003211AC string=0x00000000003211B0 "\t"
 *   insn=0x00000000003211B4 string=0x00000000003211B8 "!"
 *   insn=0x00000000003211B8 string=0x00000000003211BC ""
 *   insn=0x00000000003211BC string=0x00000000003211C0 "a""
 *   insn=0x00000000003211C0 string=0x00000000003211C4 "h"
 *   insn=0x00000000003211C8 string=0x00000000003211CC "g"
 *   insn=0x00000000003211C8 string=0x00000000003211E4 "(|"
 *   insn=0x00000000003211D0 string=0x00000000003211D4 "Z"
 *   insn=0x00000000003211D4 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003211D8 string=0x00000000003211DC "a""
 *   insn=0x00000000003211DC string=0x00000000003211E0 "A,"
 *   insn=0x00000000003211E4 string=0x00000000003211E8 ""
 *   insn=0x00000000003211EC string=0x00000000003211F0 ""
 *   insn=0x00000000003211F0 string=0x00000000003211F4 "{"
 *   insn=0x00000000003211F0 string=0x0000000000321230 "("
 *   insn=0x00000000003211F4 string=0x00000000003211F8 ""
 *   insn=0x00000000003211FC string=0x0000000000321200 "("
 *   insn=0x00000000003211FC string=0x0000000000321240 "("
 *   insn=0x00000000003211FC string=0x0000000000321250 "("
 *   insn=0x00000000003211FC string=0x0000000000321264 "("
 *   insn=0x00000000003211FC string=0x0000000000321278 "("
 *   insn=0x00000000003211FC string=0x0000000000321288 "("
 *   insn=0x00000000003211FC string=0x00000000003212B8 "("
 *   insn=0x00000000003211FC string=0x00000000003212CC "("
 *   insn=0x0000000000321204 string=0x0000000000321208 "i"
 *   insn=0x0000000000321208 string=0x000000000032120C "?"
 *   insn=0x0000000000321210 string=0x0000000000321214 "*"
 *   insn=0x0000000000321218 string=0x000000000032121C "J"
 *   insn=0x000000000032121C string=0x0000000000321220 ")"
 *   insn=0x0000000000321224 string=0x0000000000321228 "i"
 *   insn=0x0000000000321228 string=0x000000000032122C "7"
 *   insn=0x0000000000321234 string=0x0000000000321238 "A"
 *   insn=0x0000000000321238 string=0x000000000032123C "K"
 *   insn=0x000000000032125C string=0x0000000000321260 "5"
 *   insn=0x0000000000321268 string=0x000000000032126C "a"
 *   insn=0x0000000000321288 string=0x000000000032128C "a"
 *   insn=0x000000000032128C string=0x0000000000321290 "i"
 *   insn=0x0000000000321290 string=0x0000000000321294 "?"
 *   insn=0x0000000000321298 string=0x000000000032129C "*"
 *   insn=0x00000000003212A0 string=0x00000000003212A4 "J"
 *   insn=0x00000000003212A4 string=0x00000000003212A8 ")"
 *   insn=0x00000000003212AC string=0x00000000003212B0 "i"
 *   insn=0x00000000003212B0 string=0x00000000003212B4 "]"
 *   insn=0x00000000003212C4 string=0x00000000003212C8 "c"
 *   insn=0x00000000003212D8 string=0x00000000003212DC "`$"
 *   insn=0x00000000003212E0 string=0x00000000003212E4 "{q"
 *   insn=0x00000000003212E4 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003212F4 string=0x00000000003212F8 "V_"
 *   insn=0x00000000003212F8 string=0x00000000003212FC " #"
 *   insn=0x00000000003212F8 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000321300 string=0x0000000000321304 "i"
 *   insn=0x000000000032130C string=0x0000000000321310 "?"
 *   insn=0x0000000000321310 string=0x0000000000321314 "j"
 *   insn=0x0000000000321318 string=0x000000000032131C "B"
 *   insn=0x000000000032131C string=0x0000000000321320 "("
 *   insn=0x0000000000321328 string=0x000000000032132C "("
 *   insn=0x000000000032132C string=0x0000000000321330 "h"
 *   insn=0x0000000000321334 string=0x0000000000321338 "H"
 *   insn=0x0000000000321340 string=0x0000000000321358 "h"
 *   insn=0x0000000000321348 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032134C string=0x0000000000321350 "`Z"
 *   insn=0x0000000000321350 string=0x00000000001F7CD0 "0'"
 *   insn=0x0000000000321360 string=0x0000000000321364 "\t"
 *   insn=0x0000000000321368 string=0x000000000032136C ")"
 *   insn=0x000000000032136C string=0x0000000000321370 ""
 *   insn=0x0000000000321374 string=0x0000000000321378 "h"
 *   insn=0x000000000032137C string=0x0000000000321390 "h&G)\n"
 *   insn=0x0000000000321384 string=0x0000000000321388 "2_"
 *   insn=0x0000000000321390 string=0x0000000000321394 "\n"
 *   insn=0x0000000000321398 string=0x000000000032139C "j:"
 *   insn=0x000000000032139C string=0x00000000003213A0 "\n"
 *   insn=0x00000000003213A8 string=0x00000000003213AC "u"
 *   insn=0x00000000003213BC string=0x00000000001F5710 "P'"
 *   insn=0x00000000003213C0 string=0x00000000003213C4 "h"
 *   insn=0x00000000003213D4 string=0x00000000003213D8 "h:@"
 *   insn=0x00000000003213D8 string=0x00000000003213DC ""
 *   insn=0x00000000003213DC string=0x00000000003213E0 "K"
 *   insn=0x00000000003213E0 string=0x00000000003213E4 "h:"
 *   insn=0x00000000003213E0 string=0x00000000003213E8 "i"
 *   insn=0x00000000003213E8 string=0x00000000003213EC "?"
 *   insn=0x00000000003213F0 string=0x00000000003213F4 "*"
 *   insn=0x00000000003213F4 string=0x00000000003213F8 "_a"
 *   insn=0x00000000003213F8 string=0x00000000003213FC "A"
 *   insn=0x00000000003213FC string=0x0000000000321400 ")"
 *   insn=0x0000000000321400 string=0x0000000000321404 "i"
 *   insn=0x0000000000321404 string=0x0000000000321408 "?"
 *   insn=0x0000000000321418 string=0x000000000032141C " "
 *   insn=0x0000000000321420 string=0x0000000000321424 "i"
 *   insn=0x000000000032142C string=0x0000000000321430 "?"
 *   insn=0x0000000000321430 string=0x0000000000321434 "j"
 *   insn=0x0000000000321438 string=0x000000000032143C "B"
 *   insn=0x000000000032143C string=0x0000000000321440 "("
 *   insn=0x0000000000321448 string=0x000000000032144C "("
 *   insn=0x000000000032144C string=0x0000000000321450 "h"
 *   insn=0x0000000000321454 string=0x0000000000321458 "H"
 *   insn=0x0000000000321460 string=0x0000000000321478 "h"
 *   insn=0x0000000000321464 string=0x0000000000321468 "^P"
 *   insn=0x0000000000321470 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000321480 string=0x0000000000321484 "\t"
 *   insn=0x0000000000321488 string=0x000000000032148C ")"
 *   insn=0x000000000032148C string=0x0000000000321490 ""
 *   insn=0x0000000000321494 string=0x0000000000321498 "h"
 *   insn=0x000000000032149C string=0x00000000003214B0 "h&G)\n"
 *   insn=0x00000000003214B0 string=0x00000000003214B4 "\n"
 *   insn=0x00000000003214B8 string=0x00000000003214BC "j:"
 *   insn=0x00000000003214BC string=0x00000000003214C0 "\n"
 *   insn=0x00000000003214C8 string=0x00000000003214CC "-"
 *   insn=0x00000000003214E0 string=0x00000000003214E4 "h"
 *   insn=0x00000000003214F0 string=0x00000000003214F4 "G"
 *   insn=0x00000000003214F4 string=0x00000000003214F8 "h:@"
 *   insn=0x00000000003214F8 string=0x00000000003214FC ""
 *   insn=0x00000000003214FC string=0x0000000000321500 "K"
 *   insn=0x0000000000321500 string=0x0000000000321504 "h:"
 *   insn=0x0000000000321500 string=0x0000000000321508 "h"
 *   insn=0x0000000000321510 string=0x0000000000321514 "\t"
 *   insn=0x0000000000321514 string=0x0000000000321518 "?"
 *   insn=0x0000000000321518 string=0x000000000032151C "A"
 *   insn=0x000000000032151C string=0x0000000000321520 ""
 *   insn=0x0000000000321520 string=0x0000000000321524 "h"
 *   insn=0x0000000000321530 string=0x0000000000321534 "`"
 *   insn=0x0000000000321530 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000321540 string=0x0000000000321544 "("
 *   insn=0x0000000000321548 string=0x000000000032154C "h"
 *   insn=0x0000000000321554 string=0x0000000000321558 "\t"
 *   insn=0x0000000000321558 string=0x000000000032155C "?"
 *   insn=0x000000000032155C string=0x0000000000321560 "!"
 *   insn=0x0000000000321560 string=0x0000000000321564 ""
 *   insn=0x0000000000321564 string=0x0000000000321568 "h"
 *   insn=0x0000000000321570 string=0x0000000000321574 "wd"
 *   insn=0x0000000000321574 string=0x0000000000321578 "@"
 *   insn=0x0000000000321584 string=0x0000000000321588 "("
 *   insn=0x000000000032158C string=0x0000000000321590 "i"
 *   insn=0x0000000000321590 string=0x0000000000321594 "?"
 *   insn=0x0000000000321594 string=0x0000000000321598 "b"
 *   insn=0x0000000000321598 string=0x000000000032159C "*"
 *   insn=0x000000000032159C string=0x00000000003215A0 "_\t"
 *   insn=0x00000000003215A4 string=0x00000000003215A8 ")"
 *   insn=0x00000000003215A8 string=0x00000000003215AC "i"
 *   insn=0x00000000003215B0 string=0x00000000003215B4 ""
 *   insn=0x00000000003215BC string=0x00000000003215D4 "h"
 *   insn=0x00000000003215C0 string=0x00000000003215C4 "P"
 *   insn=0x00000000003215C8 string=0x00000000003215CC "af"
 *   insn=0x00000000003215CC string=0x00000000001FAF50 "0'"
 *   insn=0x00000000003215DC string=0x00000000003215E0 "\t"
 *   insn=0x00000000003215E4 string=0x00000000003215E8 ")"
 *   insn=0x00000000003215E8 string=0x00000000003215EC ""
 *   insn=0x00000000003215F0 string=0x00000000003215F4 "h"
 *   insn=0x00000000003215F8 string=0x000000000032160C "h&G)\n"
 *   insn=0x000000000032160C string=0x0000000000321610 "\n"
 *   insn=0x0000000000321614 string=0x0000000000321618 "j:"
 *   insn=0x0000000000321618 string=0x000000000032161C "*\n"
 *   insn=0x0000000000321638 string=0x000000000032163C " \t"
 *   insn=0x0000000000321638 string=0x00000000001F6150 "0'"
 *   insn=0x000000000032163C string=0x0000000000321640 "h"
 *   insn=0x0000000000321650 string=0x0000000000321654 "h:@"
 *   insn=0x0000000000321654 string=0x0000000000321658 ""
 *   insn=0x0000000000321658 string=0x000000000032165C "K"
 *   insn=0x000000000032165C string=0x0000000000321660 "h:"
 *   insn=0x000000000032165C string=0x0000000000321664 "h"
 *   insn=0x000000000032166C string=0x0000000000321670 "\t"
 *   insn=0x0000000000321670 string=0x0000000000321674 "?)"
 *   insn=0x0000000000321674 string=0x0000000000321678 "a"
 *   insn=0x0000000000321678 string=0x000000000032167C ""
 *   insn=0x000000000032167C string=0x0000000000321680 "h"
 *   insn=0x0000000000321688 string=0x000000000032168C ""
 *   insn=0x0000000000321694 string=0x00000000003216AC "h"
 *   insn=0x00000000003216A0 string=0x00000000003216A4 "+f"
 *   insn=0x00000000003216B4 string=0x00000000003216B8 "\t"
 *   insn=0x00000000003216BC string=0x00000000003216C0 ")"
 *   insn=0x00000000003216C0 string=0x00000000003216C4 ""
 *   insn=0x00000000003216C8 string=0x00000000003216CC "h"
 *   insn=0x00000000003216D0 string=0x00000000003216E4 "h&G)\n"
 *   insn=0x00000000003216D8 string=0x00000000003216DC "]^"
 *   insn=0x00000000003216E4 string=0x00000000003216E8 "\n"
 *   insn=0x00000000003216EC string=0x00000000003216F0 "j:"
 *   insn=0x00000000003216F0 string=0x00000000003216F4 "j"
 *   insn=0x0000000000321710 string=0x0000000000321714 "`"
 *   insn=0x0000000000321714 string=0x0000000000321718 "h"
 *   insn=0x0000000000321718 string=0x000000000032171C "("
 *   insn=0x0000000000321728 string=0x000000000032172C "h:@"
 *   insn=0x000000000032172C string=0x0000000000321730 ""
 *   insn=0x0000000000321730 string=0x0000000000321734 "K"
 *   insn=0x0000000000321734 string=0x0000000000321738 "h:"
 *   insn=0x0000000000321734 string=0x000000000032173C "h"
 *   insn=0x0000000000321744 string=0x0000000000321748 "h.@"
 *   insn=0x0000000000321754 string=0x0000000000321758 "`"
 *   insn=0x0000000000321794 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003217AC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003217B0 string=0x00000000003217B4 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireEmitterComponent::MergePartialFromCodedStream(
        Caver::Proto::FireEmitterComponent *this,
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
  int v14; // w8
  unsigned __int64 v15; // x8
  char *v16; // x9
  unsigned int v17; // w10
  _BYTE *v18; // x9
  int v19; // w10
  int v20; // w11
  Caver::Proto::Vector2 *v21; // x21
  char *v22; // x8
  int v23; // w8
  int v24; // w9
  int v25; // w22
  int v26; // w8
  bool v27; // vf
  int v28; // w8
  _BYTE *v29; // x9
  int v30; // w11
  Caver::Proto::FloatColor *v31; // x21
  char *v32; // x8
  int v33; // w8
  int v34; // w9
  int v35; // w22
  int v36; // w8
  int v37; // w8
  _BYTE *v38; // x8
  int v39; // w9
  _BYTE *v40; // x8
  int v41; // w9
  _BYTE *v42; // x9
  Caver::Proto::Vector3 *v43; // x21
  char *v44; // x8
  int v45; // w8
  int v46; // w9
  int v47; // w22
  int v48; // w8
  int v49; // w8
  _BYTE *v50; // x8
  Caver::Proto::Vector3 *v51; // x21
  char *v52; // x8
  int v53; // w8
  int v54; // w9
  int v55; // w22
  int v56; // w8
  int v57; // w8
  __int64 result; // x0
  unsigned int v59; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v60; // [xsp+8h] [xbp-38h]

  v60 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_29;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v59) & 1) == 0 )
            return 0;
          v11 = v59;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v59 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v20 = *((_DWORD *)this + 16);
        *((_DWORD *)this + 3) = v11;
        v13 = v20 | 1;
        *((_DWORD *)this + 16) = v20 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
        goto LABEL_37;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_29;
        v13 = *((_DWORD *)this + 16);
LABEL_37:
        v21 = (Caver::Proto::Vector2 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 16) = v13 | 4;
        if ( !v21 )
        {
          v21 = (Caver::Proto::Vector2 *)operator new(0x18u);
          Caver::Proto::Vector2::Vector2(v21);
          *((_QWORD *)this + 3) = v21;
        }
        v22 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v22 >= *((_QWORD *)a2 + 2) || *v22 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v59) & 1) == 0 )
            return 0;
        }
        else
        {
          v59 = (unsigned __int8)*v22;
          *((_QWORD *)a2 + 1) = v22 + 1;
        }
        v23 = *((_DWORD *)a2 + 14);
        v24 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v23 + 1;
        if ( v23 >= v24 )
          return 0;
        v25 = google::protobuf::io::CodedInputStream::PushLimit(a2, v59);
        if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v21, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v25);
        v26 = *((_DWORD *)a2 + 14);
        v27 = __OFSUB__(v26, 1);
        v28 = v26 - 1;
        if ( v28 < 0 == v27 )
          *((_DWORD *)a2 + 14) = v28;
        v29 = (_BYTE *)*((_QWORD *)a2 + 1);
        v15 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v29 >= v15 || *v29 != 24 )
          continue;
        v16 = v29 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 >= v15 )
          goto LABEL_51;
LABEL_24:
        if ( *v16 < 0 )
        {
LABEL_51:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v59) & 1) == 0 )
            return 0;
          v17 = v59;
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          v15 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = v16 + 1;
          v59 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v30 = *((_DWORD *)this + 16);
        *((_DWORD *)this + 4) = v17;
        v19 = v30 | 2;
        *((_DWORD *)this + 16) = v30 | 2;
        if ( (unsigned __int64)v18 >= v15 || *v18 != 42 )
          continue;
        *((_QWORD *)a2 + 1) = v18 + 1;
LABEL_56:
        v31 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 5);
        *((_DWORD *)this + 16) = v19 | 0x10;
        if ( !v31 )
        {
          v31 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v31);
          *((_QWORD *)this + 5) = v31;
        }
        v32 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v32 >= *((_QWORD *)a2 + 2) || *v32 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v59) & 1) == 0 )
            return 0;
        }
        else
        {
          v59 = (unsigned __int8)*v32;
          *((_QWORD *)a2 + 1) = v32 + 1;
        }
        v33 = *((_DWORD *)a2 + 14);
        v34 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v33 + 1;
        if ( v33 >= v34 )
          return 0;
        v35 = google::protobuf::io::CodedInputStream::PushLimit(a2, v59);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v31, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v35);
        v36 = *((_DWORD *)a2 + 14);
        v27 = __OFSUB__(v36, 1);
        v37 = v36 - 1;
        if ( v37 < 0 == v27 )
          *((_DWORD *)a2 + 14) = v37;
        v38 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v38 >= *((_QWORD *)a2 + 2) || *v38 != 53 )
          continue;
        *((_QWORD *)a2 + 1) = v38 + 1;
LABEL_70:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v59) & 1) == 0 )
          return 0;
        v39 = *((_DWORD *)this + 16);
        *((_DWORD *)this + 12) = v59;
        *((_DWORD *)this + 16) = v39 | 0x20;
        v40 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v40 >= *((_QWORD *)a2 + 2) || *v40 != 61 )
          continue;
        *((_QWORD *)a2 + 1) = v40 + 1;
LABEL_74:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v59) & 1) == 0 )
          return 0;
        v41 = *((_DWORD *)this + 16);
        *((_DWORD *)this + 13) = v59;
        v14 = v41 | 0x40;
        *((_DWORD *)this + 16) = v41 | 0x40;
        v42 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v42 >= *((_QWORD *)a2 + 2) || *v42 != 66 )
          continue;
        *((_QWORD *)a2 + 1) = v42 + 1;
LABEL_78:
        v43 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 7);
        *((_DWORD *)this + 16) = v14 | 0x80;
        if ( !v43 )
        {
          v43 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v43);
          *((_QWORD *)this + 7) = v43;
        }
        v44 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v44 >= *((_QWORD *)a2 + 2) || *v44 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v59) & 1) == 0 )
            return 0;
        }
        else
        {
          v59 = (unsigned __int8)*v44;
          *((_QWORD *)a2 + 1) = v44 + 1;
        }
        v45 = *((_DWORD *)a2 + 14);
        v46 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v45 + 1;
        if ( v45 >= v46 )
          return 0;
        v47 = google::protobuf::io::CodedInputStream::PushLimit(a2, v59);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v43, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v47);
        v48 = *((_DWORD *)a2 + 14);
        v27 = __OFSUB__(v48, 1);
        v49 = v48 - 1;
        if ( v49 < 0 == v27 )
          *((_DWORD *)a2 + 14) = v49;
        v50 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v50 >= *((_QWORD *)a2 + 2) || *v50 != 74 )
          continue;
        *((_QWORD *)a2 + 1) = v50 + 1;
LABEL_92:
        v51 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 16) |= 8u;
        if ( !v51 )
        {
          v51 = (Caver::Proto::Vector3 *)operator new(0x20u);
          Caver::Proto::Vector3::Vector3(v51);
          *((_QWORD *)this + 4) = v51;
        }
        v52 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v52 >= *((_QWORD *)a2 + 2) || *v52 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v59) & 1) == 0 )
            return 0;
        }
        else
        {
          v59 = (unsigned __int8)*v52;
          *((_QWORD *)a2 + 1) = v52 + 1;
        }
        v53 = *((_DWORD *)a2 + 14);
        v54 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v53 + 1;
        if ( v53 >= v54 )
          return 0;
        v55 = google::protobuf::io::CodedInputStream::PushLimit(a2, v59);
        if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v51, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v55);
        v56 = *((_DWORD *)a2 + 14);
        v27 = __OFSUB__(v56, 1);
        v57 = v56 - 1;
        if ( v57 < 0 == v27 )
          *((_DWORD *)a2 + 14) = v57;
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
          goto LABEL_29;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v15 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 < v15 )
          goto LABEL_24;
        goto LABEL_51;
      case 5u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_29;
        v19 = *((_DWORD *)this + 16);
        goto LABEL_56;
      case 6u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_29;
        goto LABEL_70;
      case 7u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_74;
        goto LABEL_29;
      case 8u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_29;
        v14 = *((_DWORD *)this + 16);
        goto LABEL_78;
      case 9u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_92;
LABEL_29:
        if ( v8 != 4 )
          goto LABEL_30;
        return 1;
      default:
        if ( (v6 & 7) == 4 )
          return 1;
LABEL_30:
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

