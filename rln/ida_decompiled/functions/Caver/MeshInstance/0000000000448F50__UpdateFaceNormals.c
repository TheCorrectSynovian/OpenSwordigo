/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000448F50
 * Mangled: _ZN5Caver12MeshInstance17UpdateFaceNormalsEv
 * Demangled: Caver::MeshInstance::UpdateFaceNormals(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201DF0  Caver::Mesh::GetVertexIndicesForFace(int,int *)
 *
 * Referenced strings: 28
 *   insn=0x0000000000448F64 string=0x0000000000448F68 "V"
 *   insn=0x0000000000448F74 string=0x0000000000448F78 "h^@"
 *   insn=0x0000000000448F78 string=0x0000000000448F7C "u"
 *   insn=0x0000000000448F7C string=0x0000000000448F80 "H"
 *   insn=0x0000000000448F88 string=0x0000000000448F8C "\t}"
 *   insn=0x0000000000448F8C string=0x0000000000448F90 ""
 *   insn=0x0000000000448F90 string=0x0000000000448F94 ""
 *   insn=0x0000000000448F9C string=0x0000000000448FA0 "t"
 *   insn=0x0000000000448FA0 string=0x0000000000448FA4 "`^"
 *   insn=0x0000000000448FA0 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000448FAC string=0x0000000000448FB0 ""
 *   insn=0x0000000000448FCC string=0x0000000000448FD0 "i"@"
 *   insn=0x0000000000448FD4 string=0x0000000000448FD8 "l"
 *   insn=0x0000000000448FDC string=0x0000000000448FE0 "(}J}\ti}\t"
 *   insn=0x0000000000448FE0 string=0x0000000000448FE4 "J}\ti}\t"
 *   insn=0x0000000000448FE4 string=0x0000000000448FE8 "i}\t"
 *   insn=0x0000000000448FFC string=0x0000000000449000 "C"
 *   insn=0x0000000000449000 string=0x0000000000449004 "E\t@"
 *   insn=0x0000000000449004 string=0x0000000000449008 "&"
 *   insn=0x0000000000449008 string=0x000000000044900C "0\t@"
 *   insn=0x000000000044900C string=0x0000000000449010 "k^@"
 *   insn=0x0000000000449010 string=0x0000000000449014 "c8 "
 *   insn=0x0000000000449034 string=0x0000000000449038 "b""
 *   insn=0x0000000000449038 string=0x000000000044903C "a!"
 *   insn=0x0000000000449040 string=0x0000000000449044 "h"
 *   insn=0x000000000044904C string=0x0000000000449050 " 8 "
 *   insn=0x0000000000449058 string=0x000000000044905C "u"
 *   insn=0x0000000000449098 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::MeshInstance::UpdateFaceNormals(int **this)
{
  int *v2; // x21
  unsigned __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x8
  unsigned __int64 v6; // x0
  float result; // s0
  __int64 v8; // x23
  __int64 v9; // x20
  int v10; // w9
  int *v11; // x12
  float *v12; // x8
  float *v13; // x10
  float *v14; // x9
  float v15; // s1
  float v16; // s2
  float v17; // s3
  float v18; // s4
  float v19; // s5
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s6
  float *v24; // x8
  float v25; // s2
  int v26[3]; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v27; // [xsp+18h] [xbp-38h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *this;
  if ( !this[23] )
  {
    v3 = v2[1];
    v4 = (v3 * (unsigned __int128)0xCuLL) >> 64;
    v5 = 12 * v3;
    if ( v4 )
      v6 = -1;
    else
      v6 = v5;
    this[23] = (int *)operator new[](v6);
  }
  if ( v2[1] >= 1 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      Caver::Mesh::GetVertexIndicesForFace((Caver::Mesh *)v2, v9, v26);
      v10 = *((_DWORD *)this + 8);
      v11 = this[5];
      ++v9;
      v12 = (float *)((char *)v11 + (unsigned int)(v10 * v26[0]));
      v13 = (float *)((char *)v11 + (unsigned int)(v26[1] * v10));
      v14 = (float *)((char *)v11 + (unsigned int)(v26[2] * v10));
      v15 = v12[1];
      v16 = v12[2];
      v17 = *v13 - *v12;
      v18 = v13[1] - v15;
      v19 = v13[2] - v16;
      v20 = *v14 - *v12;
      v21 = v14[1] - v15;
      v22 = v14[2] - v16;
      v23 = v18 * v22;
      v24 = (float *)&this[23][v8];
      v25 = (float)(v19 * v20) - (float)(v17 * v22);
      result = (float)(v17 * v21) - (float)(v18 * v20);
      *v24 = v23 - (float)(v19 * v21);
      v24[1] = v25;
      v24[2] = result;
      v2 = *this;
      v8 += 3;
    }
    while ( v9 < (*this)[1] );
  }
  return result;
}

