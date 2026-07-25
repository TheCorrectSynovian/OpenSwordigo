/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000228B98
 * Mangled: _ZNK5Caver29ObjectLinkControllerComponent22TargetObjectIdentifierEv
 * Demangled: Caver::ObjectLinkControllerComponent::TargetObjectIdentifier(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A528  sub_56A528
 *
 * Referenced strings: 5
 *   insn=0x0000000000228B98 string=0x0000000000228B9C "\n"
 *   insn=0x0000000000228BA0 string=0x0000000000228BA4 "+A"
 *   insn=0x0000000000228BA4 string=0x0000000000228BA8 "?"
 *   insn=0x0000000000228BA8 string=0x0000000000228BAC "A"
 *   insn=0x0000000000228BAC string=0x0000000000228BB0 "^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ObjectLinkControllerComponent::TargetObjectIdentifier@<X0>(
        Caver::ObjectLinkControllerComponent *this@<X0>,
        __int64 a2@<X8>)
{
  __int64 v2; // x9
  char *v3; // x1

  v2 = *((_QWORD *)this + 15);
  if ( v2 )
    v3 = (char *)(v2 + 80);
  else
    v3 = (char *)this + 112;
  return sub_56A528(a2, v3);
}

