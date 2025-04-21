#include "benchmarks/benchmark_hybrid_pgm_lipp.h"
#include "benchmark.h"
#include "benchmarks/common.h"
#include "competitors/hybrid_pgm_lipp.h"

template <typename SearchClass, int record>
void benchmark_64_hybrid_pgm_lipp(tli::Benchmark<uint64_t>& benchmark, bool pareto, const std::vector<int>& params) {
  if (!pareto && params.empty()) {
    benchmark.template Run<HybridPGMLIPP<uint64_t, SearchClass, 8>>();
  } else {
    util::fail("HybridPGMLIPP does not support pareto or parameter sweeps.");
  }
}

INSTANTIATE_TEMPLATES_MULTITHREAD(benchmark_64_hybrid_pgm_lipp, uint64_t);