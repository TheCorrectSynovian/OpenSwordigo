/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6570
 * Mangled: ._ZN5Caver16ComponentFactory25NewComponentWithClassNameERKSs
 * Demangled: Caver::ComponentFactory::NewComponentWithClassName(std::string const&)
 *
 * Callers: 2
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *   0x00000000004770DC  sub_4770DC
 *
 * Callees: 1
 *   0x0000000000244834  boost::function<Caver::Component * ()(void)>::operator=(boost::function<Caver::Component * ()(void)> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6578 string=0x00000000001F657C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ComponentFactory::NewComponentWithClassName()
{
  JUMPOUT(0x24493C);
}

