/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000448EB0
 * Mangled: _ZN5Caver12MeshInstance8CopyDataERKNS_8MeshDataES3_
 * Demangled: Caver::MeshInstance::CopyData(Caver::MeshData const&,Caver::MeshData const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FFAF0  Caver::MeshData::valueSize(void)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 8
 *   insn=0x0000000000448ED8 string=0x0000000000448EDC "w\n@"
 *   insn=0x0000000000448EEC string=0x0000000000448EF0 ""
 *   insn=0x0000000000448EF0 string=0x0000000000448EF4 "("
 *   insn=0x0000000000448EF4 string=0x0000000000448EF8 "|@"
 *   insn=0x0000000000448F18 string=0x0000000000448F1C "j\n@"
 *   insn=0x0000000000448F1C string=0x0000000000448F20 "9"
 *   insn=0x0000000000448F20 string=0x0000000000448F24 ""
 *   insn=0x0000000000448F2C string=0x0000000000448F30 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int **__fastcall Caver::MeshInstance::CopyData(
        unsigned int **this,
        const Caver::MeshData *a2,
        const Caver::MeshData *a3)
{
  char *v4; // x21
  unsigned int **v6; // x22
  char *v7; // x23
  __int64 v8; // x24
  unsigned int v9; // w25
  size_t v10; // x24

  v4 = (char *)*((_QWORD *)a2 + 2);
  v6 = this;
  if ( v4 )
  {
    v7 = (char *)*((_QWORD *)a3 + 2);
    v8 = *((int *)a2 + 1);
    this = (unsigned int **)Caver::MeshData::valueSize(a2);
    if ( **v6 )
    {
      v9 = 0;
      v10 = (int)this * v8;
      do
      {
        this = (unsigned int **)memcpy(v4, v7, v10);
        ++v9;
        v4 += *((unsigned int *)a2 + 2);
        v7 += *((unsigned int *)a3 + 2);
      }
      while ( v9 < **v6 );
    }
  }
  return this;
}

