const createLogger = require('progress-estimator');
const path = require('path');
const co = require('co');

// All configuration keys are optional, but it's recommended to specify a storage location.
// Learn more about configuration options below.
const logger = createLogger({
  storagePath: path.join(__dirname, '.progress-estimator'),
});

const promise1 = Promise.resolve('sfsfsfsfs');
const promise2 = Promise.resolve('sfsdfsdfdsf');

co(function* run() {
  yield logger(promise1, 'This is a promise');
  yield logger(promise2, 'This is another promise. I think it will take about 1 second', {
    estimate: 1000,
  });
});
