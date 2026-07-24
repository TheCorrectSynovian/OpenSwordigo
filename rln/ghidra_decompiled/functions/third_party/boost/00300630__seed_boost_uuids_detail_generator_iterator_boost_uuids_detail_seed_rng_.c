/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00300630
 * Function: boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>
 * Signature: void __cdecl seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(generator_iterator * param_1, generator_iterator.conflict param_2)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void boost::random::
     mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>
     ::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(void)

{
  (*(code *)
    PTR_seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>_007e2b48)();
  return;
}


