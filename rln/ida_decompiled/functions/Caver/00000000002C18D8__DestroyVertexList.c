/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C18D8
 * Mangled: _ZN5Caver17DestroyVertexListEPNS_11VertexList_E
 * Demangled: Caver::DestroyVertexList(Caver::VertexList_ *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F89E0  .free
 *
 * Referenced strings: 4
 *   insn=0x00000000002C18E4 string=0x00000000002C18E8 "`"
 *   insn=0x00000000002C18E8 string=0x00000000002C18EC "="
 *   insn=0x00000000002C18EC string=0x00000000001F89E0 "0'"
 *   insn=0x00000000002C18F8 string=0x00000000002C18FC "9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DestroyVertexList(void **a1)
{
  free(*a1);
  free(a1);
}

