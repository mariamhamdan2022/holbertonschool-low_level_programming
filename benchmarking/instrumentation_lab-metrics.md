# Controlled Instrumentation Experiment

## Execution Results

TOTAL seconds: 0.001299
BUILD_DATA seconds: 0.000514
PROCESS seconds: 0.000522
REDUCE seconds: 0.000263

## Measurement Boundaries

- TOTAL starts before build_dataset() and ends after reduce_checksum().
- BUILD_DATA measures build_dataset().
- PROCESS measures process_dataset().
- REDUCE measures reduce_checksum().
- All measurements use clock() and CLOCKS_PER_SEC.
- Printing is excluded from the measured execution time.

## Observation

PROCESS took the longest time in this run.
BUILD_DATA was close to PROCESS.
REDUCE was the shortest phase.

TOTAL includes all three measured phases.
