pipeline {
  agent {
    node {
      label 'smith'
    }
    
  }
  stages {
    stage('build') {
      steps {
        dir(path: 'build') {
          sh 'cmake ..'
          sh 'make ..'
        }
        
      }
    }
  }
}