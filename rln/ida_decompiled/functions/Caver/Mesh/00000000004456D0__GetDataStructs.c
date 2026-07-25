/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004456D0
 * Mangled: _ZN5Caver4Mesh14GetDataStructsEPPNS_8MeshDataEPi
 * Demangled: Caver::Mesh::GetDataStructs(Caver::MeshData **,int *)
 *
 * Callers: 1
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *
 * Callees: 0
 *
 * Referenced strings: 30
 *   insn=0x00000000004456D0 string=0x00000000004456D4 "\t"
 *   insn=0x00000000004456D4 string=0x00000000004456D8 "($"
 *   insn=0x00000000004456D8 string=0x00000000004456DC "@"
 *   insn=0x00000000004456E0 string=0x00000000004456E4 "+"
 *   insn=0x00000000004456E8 string=0x00000000004456EC "\t@"
 *   insn=0x00000000004456EC string=0x00000000004456F0 ")"
 *   insn=0x00000000004456F0 string=0x00000000004456F4 "*@"
 *   insn=0x00000000004456F4 string=0x00000000004456F8 "D"
 *   insn=0x0000000000445700 string=0x0000000000445704 "*"
 *   insn=0x0000000000445700 string=0x0000000000445750 "-\n"
 *   insn=0x0000000000445704 string=0x0000000000445708 "J!"
 *   insn=0x0000000000445708 string=0x000000000044570C "?"
 *   insn=0x0000000000445718 string=0x000000000044571C "l"
 *   insn=0x0000000000445720 string=0x0000000000445724 "-"
 *   insn=0x0000000000445724 string=0x0000000000445728 "k"
 *   insn=0x0000000000445730 string=0x0000000000445734 "-x*"
 *   insn=0x0000000000445734 string=0x0000000000445738 "J"
 *   insn=0x000000000044573C string=0x0000000000445740 "+"
 *   insn=0x0000000000445744 string=0x00000000004457C0 "`"
 *   insn=0x0000000000445750 string=0x0000000000445754 " "
 *   insn=0x000000000044575C string=0x0000000000445760 ""
 *   insn=0x0000000000445768 string=0x000000000044576C ","
 *   insn=0x000000000044576C string=0x0000000000445770 "j"
 *   insn=0x0000000000445778 string=0x000000000044577C "."
 *   insn=0x0000000000445780 string=0x0000000000445784 "/<"
 *   insn=0x00000000004457A0 string=0x00000000004457A4 "!"
 *   insn=0x00000000004457B0 string=0x00000000004457B4 "A"
 *   insn=0x00000000004457C0 string=0x00000000004457C4 "I"
 *   insn=0x00000000004457C4 string=0x00000000004457C8 "("
 *   insn=0x00000000004457C8 string=0x00000000004457CC "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall Caver::Mesh::GetDataStructs(int *this, int64x2_t *a2, int *a3)
{
  signed __int64 v3; // x8
  const double *v4; // x9
  signed __int64 v5; // x11
  unsigned __int64 v6; // x10
  __int64 v7; // x12
  int64x2_t v8; // q0
  int64x2_t v9; // q1
  int64x2_t v10; // q2
  int64x2_t *v11; // x12
  int64x2_t v12; // q3
  unsigned __int64 v13; // x13
  int64x2_t v14; // q4
  int64x2_t v15; // q4

  a2->n128_u64[0] = (unsigned __int64)(this + 8);
  a2->n128_u64[1] = (unsigned __int64)(this + 14);
  v3 = this[80];
  if ( (int)v3 < 1 )
  {
    LODWORD(v6) = 2;
    goto LABEL_13;
  }
  v4 = (const double *)(this + 20);
  if ( (unsigned int)v3 <= 3 || (char *)this + 81 > (char *)&a2[1] && v4 < &a2->n128_f64[v3 + 1] )
  {
    v5 = 0;
    v6 = 2;
LABEL_6:
    v7 = 24 * v5;
    do
    {
      ++v5;
      a2->n128_u64[v6++] = *(_QWORD *)v4 + v7;
      v7 += 24;
    }
    while ( v5 < v3 );
    goto LABEL_13;
  }
  v8 = vld1q_dup_f64(v4);
  v9 = (int64x2_t)xmmword_58B480;
  v5 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  v10 = vdupq_n_s64(0x30u);
  v11 = a2 + 2;
  v6 = v3 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v12 = vdupq_n_s64(4u);
  v13 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  do
  {
    v14.n128_u64[0] = 24 * v9.n128_u64[0];
    v14.n128_u64[1] = 24 * v9.n128_u64[1];
    v15 = vaddq_s64(v8, v14);
    v9 = vaddq_s64(v9, v12);
    v13 -= 4LL;
    v11[-1] = v15;
    *v11 = vaddq_s64(v15, v10);
    v11 += 2;
  }
  while ( v13 );
  if ( v5 != v3 )
    goto LABEL_6;
LABEL_13:
  a2->n128_u64[(int)v6] = (unsigned __int64)(this + 22);
  *a3 = v6 + 1;
  return this;
}

