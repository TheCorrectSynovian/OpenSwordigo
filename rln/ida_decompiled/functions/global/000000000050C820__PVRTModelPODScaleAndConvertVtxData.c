/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050C820
 * Mangled: _Z34PVRTModelPODScaleAndConvertVtxDataR8SPODMesh13EPVRTDataType
 * Demangled: PVRTModelPODScaleAndConvertVtxData(SPODMesh &,EPVRTDataType)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9340  PVRTVertexRead(PVRTVECTOR4f *,void const*,EPVRTDataType,int)
 *   0x00000000001FE510  PVRTModelPODDataConvert(CPODData &,uint,EPVRTDataType)
 *   0x00000000001FE600  PVRTMatrixIdentityF(PVRTMATRIXf &)
 *   0x00000000001FEAA0  PVRTVertexWrite(void *,EPVRTDataType,int,PVRTVECTOR4f const*)
 *   0x00000000001FF3C0  PVRTMatrixScalingF(PVRTMATRIXf &,float,float,float)
 *   0x0000000000201F90  PVRTMatrixTranslationF(PVRTMATRIXf &,float,float,float)
 *   0x0000000000202860  PVRTBoundingBoxComputeInterleaved(PVRTBOUNDINGBOX_TAG *,uchar const*,int,int,int)
 *   0x0000000000202A50  PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Referenced strings: 40
 *   insn=0x000000000050C840 string=0x000000000050C844 "W"
 *   insn=0x000000000050C85C string=0x000000000050C860 "h"
 *   insn=0x000000000050C880 string=0x000000000050C884 "k"
 *   insn=0x000000000050C8B4 string=0x000000000050C8B8 "h\n"
 *   insn=0x000000000050C8C0 string=0x000000000050C8C4 "i"
 *   insn=0x000000000050C8C4 string=0x000000000050C8C8 "}~"
 *   insn=0x000000000050C8C8 string=0x000000000050C8CC ")"
 *   insn=0x000000000050C8CC string=0x000000000050C8D0 " ih"
 *   insn=0x000000000050C8D0 string=0x000000000050C8D4 "i"
 *   insn=0x000000000050C8E0 string=0x000000000050C8E4 "#ih"
 *   insn=0x000000000050C8EC string=0x000000000050C8F0 "B8("
 *   insn=0x000000000050C8F4 string=0x000000000050C8F8 "\t"
 *   insn=0x000000000050C8F8 string=0x000000000050C8FC "!"
 *   insn=0x000000000050C908 string=0x000000000050C90C "`@!"
 *   insn=0x000000000050C930 string=0x000000000050C934 "@"
 *   insn=0x000000000050C934 string=0x000000000050C938 "A"
 *   insn=0x000000000050C938 string=0x000000000050C93C "B"
 *   insn=0x000000000050C94C string=0x000000000050C950 "@"
 *   insn=0x000000000050C970 string=0x000000000050C974 "7"
 *   insn=0x000000000050C980 string=0x000000000050C984 "x"
 *   insn=0x000000000050C98C string=0x000000000050C990 "\n"
 *   insn=0x000000000050C9A0 string=0x000000000050C9A4 ")}"
 *   insn=0x000000000050C9A8 string=0x000000000050C9AC "e"
 *   insn=0x000000000050C9AC string=0x00000000001F9340 "0'"
 *   insn=0x000000000050C9C0 string=0x000000000050C9C4 "@"
 *   insn=0x000000000050C9C4 string=0x000000000050C9C8 "@"
 *   insn=0x000000000050C9CC string=0x000000000050C9D0 " 8("
 *   insn=0x000000000050C9D4 string=0x000000000050C9D8 " \t "
 *   insn=0x000000000050C9D8 string=0x000000000050C9DC " ( "
 *   insn=0x000000000050C9EC string=0x000000000050C9F0 "+}"
 *   insn=0x000000000050C9F0 string=0x000000000050C9F4 ")"
 *   insn=0x000000000050C9F4 string=0x000000000050C9F8 "?5"
 *   insn=0x000000000050C9F8 string=0x000000000050C9FC "@"
 *   insn=0x000000000050C9FC string=0x000000000050CA00 "h"
 *   insn=0x000000000050CA00 string=0x000000000050CA04 "\t"
 *   insn=0x000000000050CA08 string=0x000000000050CA10 ""}"
 *   insn=0x000000000050CA14 string=0x000000000050CA18 """
 *   insn=0x000000000050CA24 string=0x000000000050CA28 "c"
 *   insn=0x000000000050CA54 string=0x000000000050CA58 "A"
 *   insn=0x000000000050CA80 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTModelPODScaleAndConvertVtxData(__int64 a1, int a2)
{
  __int64 result; // x0
  unsigned int v5; // w22

  _ReadStatusReg(TPIDR_EL0);
  PVRTMatrixIdentityF();
  if ( !*(_DWORD *)a1 )
    return 0;
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    if ( a2 == 1 )
      return 1;
    goto LABEL_7;
  }
  result = 1;
  if ( a2 != 1 && !*(_QWORD *)(a1 + 232) )
  {
LABEL_7:
    PVRTBoundingBoxComputeInterleaved();
    if ( (unsigned int)(a2 - 2) > 0xC )
      return 1;
    PVRTMatrixTranslationF();
    PVRTMatrixScalingF();
    PVRTMatrixMultiplyF();
    PVRTMatrixTranslationF();
    PVRTMatrixMultiplyF();
    if ( *(_DWORD *)a1 )
    {
      v5 = 0;
      do
      {
        PVRTVertexRead();
        PVRTVertexWrite();
        ++v5;
      }
      while ( v5 < *(_DWORD *)a1 );
    }
    PVRTModelPODDataConvert();
    return 0;
  }
  return result;
}

