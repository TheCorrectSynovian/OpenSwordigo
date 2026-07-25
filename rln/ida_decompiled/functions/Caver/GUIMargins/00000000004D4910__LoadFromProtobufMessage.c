/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4910
 * Mangled: _ZN5Caver10GUIMargins23LoadFromProtobufMessageERKNS_5Proto10GUIMarginsE
 * Demangled: Caver::GUIMargins::LoadFromProtobufMessage(Caver::Proto::GUIMargins const&)
 *
 * Callers: 2
 *   0x00000000001FFFE0  Caver::GUIMargins::LoadFromProtobufMessage(Caver::Proto::GUIMargins const&)
 *   0x00000000004D4708  Caver::GUIPopoverView::~GUIPopoverView()
 *
 * Callees: 0
 *
 * Referenced strings: 27
 *   insn=0x00000000004D4914 string=0x00000000004D4918 "h"
 *   insn=0x00000000004D4914 string=0x00000000004D4928 "("
 *   insn=0x00000000004D4918 string=0x00000000004D491C "("
 *   insn=0x00000000004D4918 string=0x00000000004D4944 "("
 *   insn=0x00000000004D491C string=0x00000000004D4960 "("
 *   insn=0x00000000004D4920 string=0x00000000004D497C "("
 *   insn=0x00000000004D4928 string=0x00000000004D492C "\t"
 *   insn=0x00000000004D492C string=0x00000000004D4930 ""
 *   insn=0x00000000004D4930 string=0x00000000004D4934 "("
 *   insn=0x00000000004D4934 string=0x00000000004D4938 ""
 *   insn=0x00000000004D4938 string=0x00000000004D493C "("
 *   insn=0x00000000004D4944 string=0x00000000004D4948 "\t"
 *   insn=0x00000000004D4948 string=0x00000000004D494C ""
 *   insn=0x00000000004D494C string=0x00000000004D4950 "("
 *   insn=0x00000000004D4950 string=0x00000000004D4954 ""
 *   insn=0x00000000004D4954 string=0x00000000004D4958 "("
 *   insn=0x00000000004D4958 string=0x00000000004D495C "("
 *   insn=0x00000000004D4960 string=0x00000000004D4964 "\t"
 *   insn=0x00000000004D4964 string=0x00000000004D4968 ""
 *   insn=0x00000000004D4968 string=0x00000000004D496C "("
 *   insn=0x00000000004D496C string=0x00000000004D4970 ""
 *   insn=0x00000000004D4970 string=0x00000000004D4974 "("
 *   insn=0x00000000004D4974 string=0x00000000004D4978 "h"
 *   insn=0x00000000004D497C string=0x00000000004D4980 "\t"
 *   insn=0x00000000004D4980 string=0x00000000004D4984 ""
 *   insn=0x00000000004D4984 string=0x00000000004D4988 "("
 *   insn=0x00000000004D4988 string=0x00000000004D498C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall Caver::GUIMargins::LoadFromProtobufMessage(int *this, const Caver::Proto::GUIMargins *a2)
{
  int v2; // w8
  int v3; // w9
  int v4; // w9
  int v5; // w9
  int v6; // w9

  v2 = *((_DWORD *)a2 + 7);
  if ( (v2 & 1) != 0 )
  {
    v3 = *this;
    this[1] = *((_DWORD *)a2 + 3);
    *this = v3 | 1;
    v2 = *((_DWORD *)a2 + 7);
    if ( (v2 & 2) == 0 )
    {
LABEL_3:
      if ( (v2 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_8;
    }
  }
  else if ( (v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v4 = *this;
  this[2] = *((_DWORD *)a2 + 4);
  *this = v4 | 2;
  v2 = *((_DWORD *)a2 + 7);
  if ( (v2 & 4) == 0 )
  {
LABEL_4:
    if ( (v2 & 8) == 0 )
      return this;
LABEL_9:
    v6 = *this;
    this[4] = *((_DWORD *)a2 + 6);
    *this = v6 | 8;
    return this;
  }
LABEL_8:
  v5 = *this;
  this[3] = *((_DWORD *)a2 + 5);
  *this = v5 | 4;
  if ( (*((_DWORD *)a2 + 7) & 8) != 0 )
    goto LABEL_9;
  return this;
}

