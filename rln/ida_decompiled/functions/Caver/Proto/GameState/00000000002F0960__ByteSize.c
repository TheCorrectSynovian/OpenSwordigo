/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F0960
 * Mangled: _ZNK5Caver5Proto9GameState8ByteSizeEv
 * Demangled: Caver::Proto::GameState::ByteSize(void)
 *
 * Callers: 1
 *   0x0000000000203110  Caver::Proto::GameState::ByteSize(void)
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F75F0  Caver::Proto::CharacterState::ByteSize(void)
 *   0x00000000002029A0  Caver::Proto::LevelState::ByteSize(void)
 *
 * Referenced strings: 173
 *   insn=0x00000000002F0978 string=0x00000000002F097C "i"
 *   insn=0x00000000002F097C string=0x00000000002F0980 "?"
 *   insn=0x00000000002F0984 string=0x00000000002F0988 "\t"
 *   insn=0x00000000002F098C string=0x00000000002F0990 ")"
 *   insn=0x00000000002F0990 string=0x00000000002F0994 "("
 *   insn=0x00000000002F0990 string=0x00000000002F09F4 "t*@"
 *   insn=0x00000000002F0994 string=0x00000000002F0A34 "\t"
 *   insn=0x00000000002F0998 string=0x00000000002F099C "?"
 *   insn=0x00000000002F09A4 string=0x00000000002F0D44 "?"
 *   insn=0x00000000002F09A8 string=0x00000000002F09AC "h\n@"
 *   insn=0x00000000002F09AC string=0x00000000002F09B0 ")"
 *   insn=0x00000000002F09B4 string=0x00000000002F09B8 ")"
 *   insn=0x00000000002F09B8 string=0x00000000002F09BC "("
 *   insn=0x00000000002F09C0 string=0x00000000002F09C4 ""
 *   insn=0x00000000002F09C4 string=0x00000000001F75F0 "0'"
 *   insn=0x00000000002F09CC string=0x00000000002F09D0 "b"
 *   insn=0x00000000002F09D8 string=0x00000000002F09E4 "i"
 *   insn=0x00000000002F09E0 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002F09EC string=0x00000000002F09F0 ")"
 *   insn=0x00000000002F09F8 string=0x00000000002F09FC ""
 *   insn=0x00000000002F0A00 string=0x00000000002F0A04 "b"
 *   insn=0x00000000002F0A08 string=0x00000000002F0A0C ""
 *   insn=0x00000000002F0A0C string=0x00000000002F0A28 "H"
 *   insn=0x00000000002F0A18 string=0x00000000002F0A1C "i"
 *   insn=0x00000000002F0A20 string=0x00000000002F0A24 ""
 *   insn=0x00000000002F0A34 string=0x00000000002F0A38 "\t 7\t\t(7\t07\t87?"
 *   insn=0x00000000002F0A34 string=0x00000000002F0AD4 "t.@"
 *   insn=0x00000000002F0A38 string=0x00000000002F0A3C "\t\t(7\t07\t87?"
 *   insn=0x00000000002F0A38 string=0x00000000002F0B18 "t2@"
 *   insn=0x00000000002F0A3C string=0x00000000002F0A40 "\t07\t87?"
 *   insn=0x00000000002F0A3C string=0x00000000002F0B5C "t6@"
 *   insn=0x00000000002F0A40 string=0x00000000002F0A44 "\t87?"
 *   insn=0x00000000002F0A40 string=0x00000000002F0BA0 "t:@"
 *   insn=0x00000000002F0A44 string=0x00000000002F0A48 "?"
 *   insn=0x00000000002F0A44 string=0x00000000002F0BE4 "t>@"
 *   insn=0x00000000002F0A50 string=0x00000000002F0C60 ")"
 *   insn=0x00000000002F0A54 string=0x00000000002F0A58 "h^@"
 *   insn=0x00000000002F0A58 string=0x00000000002F0A5C ")"
 *   insn=0x00000000002F0A60 string=0x00000000002F0A64 ")"
 *   insn=0x00000000002F0A64 string=0x00000000002F0A68 "("
 *   insn=0x00000000002F0A70 string=0x00000000002F0A74 "?"
 *   insn=0x00000000002F0A88 string=0x00000000002F0A8C ""
 *   insn=0x00000000002F0A8C string=0x00000000002F0A90 ""
 *   insn=0x00000000002F0A94 string=0x00000000002F0A98 "b"
 *   insn=0x00000000002F0A9C string=0x00000000002F0AA0 ""
 *   insn=0x00000000002F0AA0 string=0x00000000002F0ABC "H"
 *   insn=0x00000000002F0AA8 string=0x00000000002F0AAC ""
 *   insn=0x00000000002F0AB4 string=0x00000000002F0AB8 ""
 *   insn=0x00000000002F0ACC string=0x00000000002F0AD0 "Y"
 *   insn=0x00000000002F0AD8 string=0x00000000002F0ADC ""
 *   insn=0x00000000002F0AE0 string=0x00000000002F0AE4 "b"
 *   insn=0x00000000002F0AE8 string=0x00000000002F0AEC ""
 *   insn=0x00000000002F0AEC string=0x00000000002F0B08 "H"
 *   insn=0x00000000002F0AF8 string=0x00000000002F0AFC "i"
 *   insn=0x00000000002F0B00 string=0x00000000002F0B04 ""
 *   insn=0x00000000002F0B10 string=0x00000000002F0B14 "I"
 *   insn=0x00000000002F0B1C string=0x00000000002F0B20 ""
 *   insn=0x00000000002F0B24 string=0x00000000002F0B28 "b"
 *   insn=0x00000000002F0B2C string=0x00000000002F0B30 ""
 *   insn=0x00000000002F0B30 string=0x00000000002F0B4C "H"
 *   insn=0x00000000002F0B3C string=0x00000000002F0B40 "i"
 *   insn=0x00000000002F0B44 string=0x00000000002F0B48 ""
 *   insn=0x00000000002F0B54 string=0x00000000002F0B58 "I"
 *   insn=0x00000000002F0B60 string=0x00000000002F0B64 ""
 *   insn=0x00000000002F0B68 string=0x00000000002F0B6C "b"
 *   insn=0x00000000002F0B70 string=0x00000000002F0B74 ""
 *   insn=0x00000000002F0B74 string=0x00000000002F0B90 "H"
 *   insn=0x00000000002F0B80 string=0x00000000002F0B84 "i"
 *   insn=0x00000000002F0B88 string=0x00000000002F0B8C ""
 *   insn=0x00000000002F0B98 string=0x00000000002F0B9C "I"
 *   insn=0x00000000002F0BA4 string=0x00000000002F0BA8 ""
 *   insn=0x00000000002F0BAC string=0x00000000002F0BB0 "b"
 *   insn=0x00000000002F0BB4 string=0x00000000002F0BB8 ""
 *   insn=0x00000000002F0BB8 string=0x00000000002F0BD4 "H"
 *   insn=0x00000000002F0BC4 string=0x00000000002F0BC8 "i"
 *   insn=0x00000000002F0BCC string=0x00000000002F0BD0 ""
 *   insn=0x00000000002F0BDC string=0x00000000002F0BE0 "I"
 *   insn=0x00000000002F0BE8 string=0x00000000002F0BEC ""
 *   insn=0x00000000002F0BF0 string=0x00000000002F0BF4 "b"
 *   insn=0x00000000002F0BF8 string=0x00000000002F0BFC ""
 *   insn=0x00000000002F0BFC string=0x00000000002F0C18 "H"
 *   insn=0x00000000002F0C00 string=0x00000000002F0C04 "s"
 *   insn=0x00000000002F0C08 string=0x00000000002F0C0C "i"
 *   insn=0x00000000002F0C10 string=0x00000000002F0C14 ""
 *   insn=0x00000000002F0C20 string=0x00000000002F0C24 "?"
 *   insn=0x00000000002F0C24 string=0x00000000002F0C28 "A"
 *   insn=0x00000000002F0C28 string=0x00000000002F0C2C "F"
 *   insn=0x00000000002F0C38 string=0x00000000002F0C3C "b"
 *   insn=0x00000000002F0C44 string=0x00000000002F0C50 "i"
 *   insn=0x00000000002F0C48 string=0x00000000002F0C4C "a"
 *   insn=0x00000000002F0C54 string=0x00000000002F0C58 ""
 *   insn=0x00000000002F0C60 string=0x00000000002F0C64 "tb@"
 *   insn=0x00000000002F0C68 string=0x00000000002F0C6C ""
 *   insn=0x00000000002F0C70 string=0x00000000002F0C74 "b"
 *   insn=0x00000000002F0C78 string=0x00000000002F0C7C ""
 *   insn=0x00000000002F0C7C string=0x00000000002F0C98 "H"
 *   insn=0x00000000002F0C80 string=0x00000000002F0C84 "S"
 *   insn=0x00000000002F0C88 string=0x00000000002F0C8C "i"
 *   insn=0x00000000002F0C90 string=0x00000000002F0C94 ""
 *   insn=0x00000000002F0CA4 string=0x00000000002F0CA8 "?"
 *   insn=0x00000000002F0CAC string=0x00000000002F0CB0 "\n\t"
 *   insn=0x00000000002F0CB0 string=0x00000000002F0CB4 "?"
 *   insn=0x00000000002F0CB8 string=0x00000000002F0CBC ")"
 *   insn=0x00000000002F0CBC string=0x00000000002F0CC0 "tj@"
 *   insn=0x00000000002F0CBC string=0x00000000002F0D00 ")"
 *   insn=0x00000000002F0CC4 string=0x00000000002F0CC8 ""
 *   insn=0x00000000002F0CCC string=0x00000000002F0CD0 "b"
 *   insn=0x00000000002F0CD4 string=0x00000000002F0CD8 ""
 *   insn=0x00000000002F0CD8 string=0x00000000002F0CF4 "H"
 *   insn=0x00000000002F0CDC string=0x00000000002F0CE0 "<"
 *   insn=0x00000000002F0CE4 string=0x00000000002F0CE8 "i"
 *   insn=0x00000000002F0CEC string=0x00000000002F0CF0 ""
 *   insn=0x00000000002F0D00 string=0x00000000002F0D04 "tn@"
 *   insn=0x00000000002F0D08 string=0x00000000002F0D0C ""
 *   insn=0x00000000002F0D10 string=0x00000000002F0D14 "b"
 *   insn=0x00000000002F0D18 string=0x00000000002F0D1C ""
 *   insn=0x00000000002F0D1C string=0x00000000002F0D38 "H"
 *   insn=0x00000000002F0D20 string=0x00000000002F0D24 "+"
 *   insn=0x00000000002F0D28 string=0x00000000002F0D2C "i"
 *   insn=0x00000000002F0D30 string=0x00000000002F0D34 ""
 *   insn=0x00000000002F0D48 string=0x00000000002F0D7C "h"@"
 *   insn=0x00000000002F0D4C string=0x00000000002F0D50 "?"
 *   insn=0x00000000002F0D54 string=0x00000000002F0D58 "?"
 *   insn=0x00000000002F0D58 string=0x00000000002F0D5C "\n"
 *   insn=0x00000000002F0D5C string=0x00000000002F0D60 ""
 *   insn=0x00000000002F0D60 string=0x00000000002F0D64 "?"
 *   insn=0x00000000002F0D64 string=0x00000000002F0D68 "\n"
 *   insn=0x00000000002F0D68 string=0x00000000002F0D6C ""
 *   insn=0x00000000002F0D6C string=0x00000000002F0D70 "\n"
 *   insn=0x00000000002F0D70 string=0x00000000002F0D74 "?"
 *   insn=0x00000000002F0D84 string=0x00000000002F0D88 "K"
 *   insn=0x00000000002F0D88 string=0x00000000002F0DD0 "h"
 *   insn=0x00000000002F0D8C string=0x00000000002F0D90 "h"
 *   insn=0x00000000002F0DA0 string=0x00000000002F0DA4 "b"
 *   insn=0x00000000002F0DAC string=0x00000000002F0DB8 "h""
 *   insn=0x00000000002F0DB0 string=0x00000000002F0DB4 ""
 *   insn=0x00000000002F0DC0 string=0x00000000002F0DC4 "5"
 *   insn=0x00000000002F0DC8 string=0x00000000002F0DCC "+"
 *   insn=0x00000000002F0DDC string=0x00000000002F0E8C "h"
 *   insn=0x00000000002F0DE0 string=0x00000000002F0DE4 "hB@"
 *   insn=0x00000000002F0DFC string=0x00000000002F0E4C "\n\t"
 *   insn=0x00000000002F0E0C string=0x00000000002F0E74 "h"
 *   insn=0x00000000002F0E14 string=0x00000000002F0E18 ""
 *   insn=0x00000000002F0E1C string=0x00000000002F0E20 "b"
 *   insn=0x00000000002F0E24 string=0x00000000002F0E28 ""
 *   insn=0x00000000002F0E28 string=0x00000000002F0E44 "H"
 *   insn=0x00000000002F0E3C string=0x00000000002F0E40 ""
 *   insn=0x00000000002F0E44 string=0x00000000002F0E48 ""
 *   insn=0x00000000002F0E4C string=0x00000000002F0E50 "?"
 *   insn=0x00000000002F0E5C string=0x00000000002F0E60 "b"
 *   insn=0x00000000002F0E7C string=0x00000000002F0E80 "5"
 *   insn=0x00000000002F0E94 string=0x00000000002F0E98 "k"
 *   insn=0x00000000002F0E98 string=0x00000000002F0F84 "t\n"
 *   insn=0x00000000002F0E9C string=0x00000000002F0EA0 "hr@"
 *   insn=0x00000000002F0EA8 string=0x00000000002F0EAC "h"
 *   insn=0x00000000002F0EBC string=0x00000000002F0EC0 ""
 *   insn=0x00000000002F0EC4 string=0x00000000002F0EC8 "b"
 *   insn=0x00000000002F0ED0 string=0x00000000002F0EE8 "("
 *   insn=0x00000000002F0EE0 string=0x00000000002F0EE4 ""
 *   insn=0x00000000002F0EE8 string=0x00000000002F0EEC ""
 *   insn=0x00000000002F0EF0 string=0x00000000002F0EF4 "?"
 *   insn=0x00000000002F0EF4 string=0x00000000002F0EF8 "5"
 *   insn=0x00000000002F0F08 string=0x00000000002F0F0C "("
 *   insn=0x00000000002F0F0C string=0x00000000002F0F10 ""
 *   insn=0x00000000002F0F14 string=0x00000000002F0F18 "b"
 *   insn=0x00000000002F0F1C string=0x00000000002F0F20 ""
 *   insn=0x00000000002F0F20 string=0x00000000002F0F3C "H"
 *   insn=0x00000000002F0F28 string=0x00000000002F0F2C "("
 *   insn=0x00000000002F0F34 string=0x00000000002F0F38 ""
 *   insn=0x00000000002F0F54 string=0x00000000002F0F58 "b"
 *   insn=0x00000000002F0F60 string=0x00000000002F0F6C "h"
 *   insn=0x00000000002F0F74 string=0x00000000002F0F78 "4"
 *   insn=0x00000000002F0F7C string=0x00000000002F0F80 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameState::ByteSize(Caver::Proto::GameState *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w21
  Caver::Proto::GameState *v5; // x8
  unsigned int v6; // w20
  int v7; // w0
  _QWORD *v8; // x20
  __int64 v9; // x8
  int v10; // w10
  int v11; // w0
  Caver::Proto::GameState *v12; // x8
  __int64 v13; // x22
  int v14; // w9
  __int64 v15; // x23
  unsigned int v16; // w20
  _QWORD *v17; // x24
  __int64 v18; // x8
  int v19; // w10
  int v20; // w0
  _QWORD *v21; // x20
  __int64 v22; // x8
  int v23; // w10
  int v24; // w0
  _QWORD *v25; // x20
  __int64 v26; // x8
  int v27; // w10
  int v28; // w0
  _QWORD *v29; // x20
  __int64 v30; // x8
  int v31; // w10
  int v32; // w0
  _QWORD *v33; // x20
  __int64 v34; // x8
  int v35; // w10
  int v36; // w0
  _QWORD *v37; // x20
  __int64 v38; // x8
  int v39; // w10
  int v40; // w0
  int v41; // w0
  _QWORD *v42; // x20
  __int64 v43; // x8
  int v44; // w10
  int v45; // w0
  int v46; // w8
  _QWORD *v47; // x20
  __int64 v48; // x8
  int v49; // w10
  int v50; // w0
  _QWORD *v51; // x20
  __int64 v52; // x8
  int v53; // w10
  int v54; // w0
  int v55; // w8
  int v56; // w8
  int v57; // w21
  __int64 v58; // x22
  unsigned int v59; // w20
  int v60; // w0
  int v61; // w8
  int v62; // w21
  __int64 v63; // x22
  __int64 v64; // x23
  int v65; // w9
  unsigned int v66; // w8
  unsigned int v67; // w20
  int v68; // w0
  _QWORD *v69; // x20
  __int64 v70; // x8
  int v71; // w10
  int v72; // w0
  int v73; // w8
  unsigned int v74; // w20
  __int64 v75; // x22
  __int64 v76; // x23
  int v77; // w8
  _QWORD *v78; // x21
  __int64 v79; // x8
  int v80; // w9
  int v81; // w9
  unsigned int v82; // w21
  __int64 i; // x24
  _QWORD *v84; // x25
  __int64 v85; // x8
  int v86; // w10
  int v87; // w0
  int v88; // w0

  v3 = *((_DWORD *)this + 71);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    if ( (v3 & 0x1FE00) == 0 )
      goto LABEL_81;
    goto LABEL_24;
  }
  if ( (v3 & 1) == 0 )
  {
    v4 = 0;
    if ( (v3 & 4) == 0 )
      goto LABEL_18;
    goto LABEL_14;
  }
  if ( *((_QWORD *)this + 2) )
    v5 = this;
  else
    v5 = (Caver::Proto::GameState *)Caver::Proto::GameState::default_instance_;
  v6 = Caver::Proto::CharacterState::ByteSize(*((Caver::Proto::CharacterState **)v5 + 2));
  if ( v6 >= 0x80 )
    v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)v6,
           a2);
  else
    v7 = 1;
  v3 = *((_DWORD *)this + 71);
  v4 = v6 + v7 + 1;
  if ( (v3 & 4) != 0 )
  {
LABEL_14:
    v8 = (_QWORD *)*((_QWORD *)this + 10);
    v9 = *(_QWORD *)(*v8 - 24LL);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v9,
              a2);
      v3 = *((_DWORD *)this + 71);
      v10 = v11;
      v9 = *(_QWORD *)(*v8 - 24LL);
    }
    else
    {
      v10 = 1;
    }
    v4 += v10 + v9 + 1;
  }
LABEL_18:
  if ( (v3 & 8) != 0 )
  {
    v21 = (_QWORD *)*((_QWORD *)this + 11);
    v22 = *(_QWORD *)(*v21 - 24LL);
    if ( (unsigned int)v22 >= 0x80 )
    {
      v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v22,
              a2);
      v3 = *((_DWORD *)this + 71);
      v23 = v24;
      v22 = *(_QWORD *)(*v21 - 24LL);
    }
    else
    {
      v23 = 1;
    }
    v4 += v23 + v22 + 1;
    if ( (v3 & 0x10) == 0 )
    {
LABEL_20:
      if ( (v3 & 0x20) == 0 )
        goto LABEL_21;
      goto LABEL_43;
    }
  }
  else if ( (v3 & 0x10) == 0 )
  {
    goto LABEL_20;
  }
  v25 = (_QWORD *)*((_QWORD *)this + 12);
  v26 = *(_QWORD *)(*v25 - 24LL);
  if ( (unsigned int)v26 >= 0x80 )
  {
    v28 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v26,
            a2);
    v3 = *((_DWORD *)this + 71);
    v27 = v28;
    v26 = *(_QWORD *)(*v25 - 24LL);
  }
  else
  {
    v27 = 1;
  }
  v4 += v27 + v26 + 1;
  if ( (v3 & 0x20) == 0 )
  {
LABEL_21:
    if ( (v3 & 0x40) == 0 )
      goto LABEL_22;
    goto LABEL_47;
  }
LABEL_43:
  v29 = (_QWORD *)*((_QWORD *)this + 13);
  v30 = *(_QWORD *)(*v29 - 24LL);
  if ( (unsigned int)v30 >= 0x80 )
  {
    v32 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v30,
            a2);
    v3 = *((_DWORD *)this + 71);
    v31 = v32;
    v30 = *(_QWORD *)(*v29 - 24LL);
  }
  else
  {
    v31 = 1;
  }
  v4 += v31 + v30 + 1;
  if ( (v3 & 0x40) == 0 )
  {
LABEL_22:
    if ( (v3 & 0x80) == 0 )
      goto LABEL_23;
LABEL_51:
    v37 = (_QWORD *)*((_QWORD *)this + 15);
    v38 = *(_QWORD *)(*v37 - 24LL);
    if ( (unsigned int)v38 >= 0x80 )
    {
      v40 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v38,
              a2);
      v3 = *((_DWORD *)this + 71);
      v39 = v40;
      v38 = *(_QWORD *)(*v37 - 24LL);
    }
    else
    {
      v39 = 1;
    }
    v4 += v39 + v38 + 1;
    if ( (v3 & 0x1FE00) == 0 )
      goto LABEL_81;
    goto LABEL_24;
  }
LABEL_47:
  v33 = (_QWORD *)*((_QWORD *)this + 14);
  v34 = *(_QWORD *)(*v33 - 24LL);
  if ( (unsigned int)v34 >= 0x80 )
  {
    v36 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v34,
            a2);
    v3 = *((_DWORD *)this + 71);
    v35 = v36;
    v34 = *(_QWORD *)(*v33 - 24LL);
  }
  else
  {
    v35 = 1;
  }
  v4 += v35 + v34 + 1;
  if ( (v3 & 0x80) != 0 )
    goto LABEL_51;
LABEL_23:
  if ( (v3 & 0x1FE00) == 0 )
    goto LABEL_81;
LABEL_24:
  if ( (v3 & 0x200) != 0 )
  {
    if ( *((_QWORD *)this + 23) )
      v12 = this;
    else
      v12 = (Caver::Proto::GameState *)Caver::Proto::GameState::default_instance_;
    v13 = *((_QWORD *)v12 + 23);
    v14 = *(_DWORD *)(v13 + 24);
    if ( v14 < 1 )
    {
      v16 = *(_DWORD *)(v13 + 24);
    }
    else
    {
      v15 = 0;
      v16 = *(_DWORD *)(v13 + 24);
      do
      {
        v17 = *(_QWORD **)(*(_QWORD *)(v13 + 16) + 8 * v15);
        v18 = *(_QWORD *)(*v17 - 24LL);
        if ( (unsigned int)v18 >= 0x80 )
        {
          v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                  (google::protobuf::io::CodedOutputStream *)(unsigned int)v18,
                  a2);
          v14 = *(_DWORD *)(v13 + 24);
          v19 = v20;
          v18 = *(_QWORD *)(*v17 - 24LL);
        }
        else
        {
          v19 = 1;
        }
        ++v15;
        v16 += v19 + v18;
      }
      while ( v15 < v14 );
    }
    *(_DWORD *)(v13 + 8) = v16;
    if ( v16 >= 0x80 )
      v41 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v16,
              a2);
    else
      v41 = 1;
    v3 = *((_DWORD *)this + 71);
    v4 += v16 + v41 + 1;
  }
  if ( (v3 & 0x400) != 0 )
  {
    v42 = (_QWORD *)*((_QWORD *)this + 24);
    v43 = *(_QWORD *)(*v42 - 24LL);
    if ( (unsigned int)v43 >= 0x80 )
    {
      v45 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v43,
              a2);
      v3 = *((_DWORD *)this + 71);
      v44 = v45;
      v43 = *(_QWORD *)(*v42 - 24LL);
    }
    else
    {
      v44 = 1;
    }
    v4 += v44 + v43 + 1;
  }
  v46 = v4 + 2;
  if ( (v3 & 0x800) == 0 )
    v46 = v4;
  if ( (v3 & 0x1000) != 0 )
    v4 = v46 + 2;
  else
    v4 = v46;
  if ( (v3 & 0x2000) != 0 )
  {
    v47 = (_QWORD *)*((_QWORD *)this + 26);
    v48 = *(_QWORD *)(*v47 - 24LL);
    if ( (unsigned int)v48 >= 0x80 )
    {
      v50 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v48,
              a2);
      v3 = *((_DWORD *)this + 71);
      v49 = v50;
      v48 = *(_QWORD *)(*v47 - 24LL);
    }
    else
    {
      v49 = 1;
    }
    v4 += v49 + v48 + 2;
  }
  if ( (v3 & 0x4000) != 0 )
  {
    v51 = (_QWORD *)*((_QWORD *)this + 27);
    v52 = *(_QWORD *)(*v51 - 24LL);
    if ( (unsigned int)v52 >= 0x80 )
    {
      v54 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v52,
              a2);
      v3 = *((_DWORD *)this + 71);
      v53 = v54;
      v52 = *(_QWORD *)(*v51 - 24LL);
    }
    else
    {
      v53 = 1;
    }
    v4 += v53 + v52 + 2;
  }
LABEL_81:
  if ( (v3 & 0xFF0000) != 0 )
  {
    v55 = v4 + 3;
    if ( (v3 & 0x10000) == 0 )
      v55 = v4;
    if ( (v3 & 0x20000) != 0 )
      v55 += 3;
    if ( (v3 & 0x40000) != 0 )
      v55 += 3;
    if ( (v3 & 0x80000) != 0 )
      v4 = v55 + 3;
    else
      v4 = v55;
  }
  v56 = *((_DWORD *)this + 8);
  v57 = v56 + v4;
  if ( v56 >= 1 )
  {
    v58 = 0;
    do
    {
      v59 = Caver::Proto::LevelState::ByteSize(*(Caver::Proto::LevelState **)(*((_QWORD *)this + 3) + 8 * v58));
      if ( v59 >= 0x80 )
        v60 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v59,
                a2);
      else
        v60 = 1;
      ++v58;
      v57 += v59 + v60;
    }
    while ( v58 < *((int *)this + 8) );
  }
  v61 = *((_DWORD *)this + 34);
  v62 = v61 + v57;
  if ( v61 >= 1 )
  {
    v63 = 0;
    do
    {
      v64 = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v63);
      LOBYTE(v65) = *(_BYTE *)(v64 + 28);
      if ( (_BYTE)v65 )
      {
        if ( (*(_BYTE *)(v64 + 28) & 1) != 0 )
        {
          v69 = *(_QWORD **)(v64 + 16);
          v70 = *(_QWORD *)(*v69 - 24LL);
          if ( (unsigned int)v70 >= 0x80 )
          {
            v72 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                    (google::protobuf::io::CodedOutputStream *)(unsigned int)v70,
                    a2);
            v65 = *(_DWORD *)(v64 + 28);
            v71 = v72;
            v70 = *(_QWORD *)(*v69 - 24LL);
          }
          else
          {
            v71 = 1;
          }
          v66 = v71 + v70 + 1;
        }
        else
        {
          v66 = 0;
        }
        if ( (v65 & 2) != 0 )
          v67 = v66 + 2;
        else
          v67 = v66;
        *(_DWORD *)(v64 + 8) = v67;
        if ( v67 >= 0x80 )
          v68 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                  (google::protobuf::io::CodedOutputStream *)v67,
                  a2);
        else
          v68 = 1;
      }
      else
      {
        v67 = 0;
        *(_DWORD *)(v64 + 8) = 0;
        v68 = 1;
      }
      ++v63;
      v62 += v67 + v68;
    }
    while ( v63 < *((int *)this + 34) );
  }
  v73 = *((_DWORD *)this + 58);
  v74 = v73 + v62;
  if ( v73 >= 1 )
  {
    v75 = 0;
    do
    {
      v76 = *(_QWORD *)(*((_QWORD *)this + 28) + 8 * v75);
      if ( (*(_BYTE *)(v76 + 80) & 1) != 0 )
      {
        v78 = *(_QWORD **)(v76 + 16);
        v79 = *(_QWORD *)(*v78 - 24LL);
        if ( (unsigned int)v79 >= 0x80 )
        {
          v80 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                  (google::protobuf::io::CodedOutputStream *)(unsigned int)v79,
                  a2);
          v79 = *(_QWORD *)(*v78 - 24LL);
        }
        else
        {
          v80 = 1;
        }
        v77 = v80 + v79 + 1;
      }
      else
      {
        v77 = 0;
      }
      v81 = *(_DWORD *)(v76 + 32);
      v82 = v81 + v77;
      if ( v81 >= 1 )
      {
        for ( i = 0; i < v81; ++i )
        {
          v84 = *(_QWORD **)(*(_QWORD *)(v76 + 24) + 8 * i);
          v85 = *(_QWORD *)(*v84 - 24LL);
          if ( (unsigned int)v85 >= 0x80 )
          {
            v87 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                    (google::protobuf::io::CodedOutputStream *)(unsigned int)v85,
                    a2);
            v81 = *(_DWORD *)(v76 + 32);
            v86 = v87;
            v85 = *(_QWORD *)(*v84 - 24LL);
          }
          else
          {
            v86 = 1;
          }
          v82 += v86 + v85;
        }
      }
      *(_DWORD *)(v76 + 8) = v82;
      if ( v82 >= 0x80 )
        v88 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v82,
                a2);
      else
        v88 = 1;
      ++v75;
      v74 += v82 + v88;
    }
    while ( v75 < *((int *)this + 58) );
  }
  *((_DWORD *)this + 2) = v74;
  return v74;
}

