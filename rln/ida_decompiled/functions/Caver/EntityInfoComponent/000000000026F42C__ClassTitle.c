/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F42C
 * Mangled: _ZNK5Caver19EntityInfoComponent10ClassTitleEv
 * Demangled: Caver::EntityInfoComponent::ClassTitle(void)
 *
 * Callers: 1
 *   0x00000000001FA170  Caver::EntityInfoComponent::ClassTitle(void)
 *
 * Callees: 1
 *   0x000000000056A528  sub_56A528
 *
 * Referenced strings: 3
 *   insn=0x000000000026F430 string=0x000000000026F434 "!!"
 *   insn=0x000000000026F438 string=0x000000000026F43C ";"
 *   insn=0x000000000026F444 string=0x000000000026F448 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::EntityInfoComponent::ClassTitle@<X0>(Caver::EntityInfoComponent *this@<X0>, __int64 a2@<X8>)
{
  __int64 v2; // x9
  char *v3; // x1

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
    v3 = (char *)(v2 + 8);
  else
    v3 = (char *)this + 120;
  return sub_56A528(a2, v3);
}

