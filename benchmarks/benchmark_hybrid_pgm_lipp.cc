#include "benchmarks/benchmark_hybrid_pgm_lipp.h"
#include "benchmark.h"
#include "benchmarks/common.h"
#include "competitors/hybrid_pgm_lipp.h"

template <int record>
void benchmark_64_hybrid_pgm_lipp(tli::Benchmark<uint64_t>& benchmark) {
  benchmark.template Run<HybridPGMLIPP<uint64_t, LinearSearch<record>, 8>>();
}

INSTANTIATE_TEMPLATES_MULTITHREAD(benchmark_64_hybrid_pgm_lipp, uint64_t);