/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050C664
 * Mangled: _Z23PVRTModelPODDataConvertR8CPODDataj13EPVRTDataType
 * Demangled: PVRTModelPODDataConvert(CPODData &,uint,EPVRTDataType)
 *
 * Callers: 1
 *   0x00000000001FE510  PVRTModelPODDataConvert(CPODData &,uint,EPVRTDataType)
 *
 * Callees: 5
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F89E0  .free
 *   0x00000000001F9340  PVRTVertexRead(PVRTVECTOR4f *,void const*,EPVRTDataType,int)
 *   0x00000000001FEAA0  PVRTVertexWrite(void *,EPVRTDataType,int,PVRTVECTOR4f const*)
 *
 * Referenced strings: 37
 *   insn=0x000000000050C680 string=0x000000000050C684 "["
 *   insn=0x000000000050C684 string=0x000000000050C688 "h"
 *   insn=0x000000000050C69C string=0x000000000050C6A0 "s\n"
 *   insn=0x000000000050C6A0 string=0x000000000050C7EC "h"
 *   insn=0x000000000050C6C0 string=0x000000000050C6C4 "(!"
 *   insn=0x000000000050C6D8 string=0x000000000050C6DC "h"
 *   insn=0x000000000050C6DC string=0x000000000050C6E0 "i"
 *   insn=0x000000000050C6E0 string=0x000000000050C6E8 "("
 *   insn=0x000000000050C6E8 string=0x000000000050C6EC ""
 *   insn=0x000000000050C6EC string=0x000000000050C70C "\t}"
 *   insn=0x000000000050C6F0 string=0x000000000050C6F4 "!"
 *   insn=0x000000000050C718 string=0x000000000050C71C "?5"
 *   insn=0x000000000050C724 string=0x000000000050C728 "j"
 *   insn=0x000000000050C728 string=0x000000000050C730 "I"
 *   insn=0x000000000050C73C string=0x000000000050C740 "_"
 *   insn=0x000000000050C748 string=0x000000000050C74C " "
 *   insn=0x000000000050C748 string=0x000000000050C758 "8"
 *   insn=0x000000000050C750 string=0x00000000001F5E70 "P'"
 *   insn=0x000000000050C758 string=0x000000000050C75C "y"
 *   insn=0x000000000050C758 string=0x000000000050C7DC "_"
 *   insn=0x000000000050C76C string=0x000000000050C770 "9"
 *   insn=0x000000000050C770 string=0x000000000050C774 "aB;"
 *   insn=0x000000000050C784 string=0x00000000001F9340 "0'"
 *   insn=0x000000000050C790 string=0x000000000050C794 ",}"
 *   insn=0x000000000050C794 string=0x000000000050C798 "I"
 *   insn=0x000000000050C798 string=0x000000000050C79C "?5"
 *   insn=0x000000000050C79C string=0x000000000050C7A0 "`"
 *   insn=0x000000000050C7A0 string=0x000000000050C7A4 "h"
 *   insn=0x000000000050C7A4 string=0x000000000050C7A8 ")"
 *   insn=0x000000000050C7AC string=0x000000000050C7B4 ""}"
 *   insn=0x000000000050C7C8 string=0x000000000050C7CC "{"
 *   insn=0x000000000050C7CC string=0x000000000050C7D0 "!"
 *   insn=0x000000000050C7DC string=0x000000000050C7E0 "`"
 *   insn=0x000000000050C7E4 string=0x000000000050C7E8 "~"
 *   insn=0x000000000050C7E8 string=0x00000000001F89E0 "0'"
 *   insn=0x000000000050C7F4 string=0x000000000050C7F8 "!"
 *   insn=0x000000000050C81C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall PVRTModelPODDataConvert(unsigned int *a1, int a2, unsigned int a3)
{
  void *v5; // x19
  unsigned int v6; // w22
  unsigned int v7; // w26
  int v8; // w8
  int v9; // w9
  int v10; // w8
  int v11; // w9
  int v12; // w25
  int v13; // w27
  __int64 v14; // x28

  _ReadStatusReg(TPIDR_EL0);
  v5 = (void *)*((_QWORD *)a1 + 2);
  if ( !v5 )
    return;
  v6 = *a1;
  if ( *a1 == a3 )
    return;
  v7 = a1[2];
  v8 = a1[1];
  if ( a3 <= 0xE )
  {
    v9 = 1;
    if ( ((1 << a3) & 0x7E0E) != 0 )
    {
      if ( v6 - 1 > 0xD )
        v10 = 0;
      else
        v10 = dword_59B7F0[v6 - 1];
      v9 = v10 * a1[1];
    }
    else
    {
      v8 = a1[1];
      if ( ((1 << a3) & 0x1F0) == 0 )
        goto LABEL_12;
    }
    v8 = v9;
    a1[1] = v9;
  }
LABEL_12:
  *a1 = a3;
  if ( a3 - 1 > 0xD )
    v11 = 0;
  else
    v11 = dword_59B7B0[a3 - 1];
  v12 = v8 * v11;
  a1[2] = v8 * v11;
  if ( v7 != v8 * v11 )
    *((_QWORD *)a1 + 2) = malloc((unsigned int)(v12 * a2));
  if ( a2 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      PVRTVertexRead();
      PVRTVertexWrite();
      ++v14;
      v13 += v7;
    }
    while ( a2 != v14 );
    v12 = a1[2];
  }
  if ( v7 != v12 )
    free(v5);
}

